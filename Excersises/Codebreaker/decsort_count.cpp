#include <iostream>
using namespace std;

int main() {
	int N;
	cin >> N;
	
	int arr[N];
	
	for(int i = 0; i < N; i++) {
		cin >> arr[i];
	}

	int sorted[1000] = {0};
	
	for (int i = 0; i < N; i ++) {
		sorted[arr[i]] ++;
	}

	for (int i = 0; i < 1000; i++) {
		for (int j = 0; j < sorted[i]; j ++) {
			cout << i << " ";
		}
	}

}	

