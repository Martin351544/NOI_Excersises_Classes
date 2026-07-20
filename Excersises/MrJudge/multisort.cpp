#include <iostream>
using namespace std;

int main() {
	int N;
	int M;

	cin >> N;
	cin >> M;
	
	int arr[M];

	for (int i = 0; i < N; i ++) {
		for (int j = 0; j < M; j ++) {
			cin >> arr[j];	
		}	

		for (int j = 0; j < M - 1; j ++) {
			for (int x = 0; x < M - j - 1; x ++) {
				if (arr[x] > arr[x + 1]) {
					int temp = arr[x];
					arr[x] = arr[x + 1];
					arr [x + 1] = temp;
				}
			}
		}

		for (int j = 0; j < M; j ++) {
			cout << arr[j] << endl;
		}
	}

}
