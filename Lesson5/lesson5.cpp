#include <iostream>
using namespace std;

int main() {
	int N; // for test set to 6
	cin >> N;
	

	int M; // for test set to 10
	cin >> M;

	int arr[N];
	for (int i = 0; i < N; i++) {
		cin >> arr[i];
	}

	int counts[M] = {0};

	for (int i = 0; i < N; i++) {
		counts[arr[i]] ++;  
	}

	for (int i = 0; i < M; i++) {
		for(int j = 0; j < counts[i]; j++) {
			cout << i << " ";
		}
	}

}
