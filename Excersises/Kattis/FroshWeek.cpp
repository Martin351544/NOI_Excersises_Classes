#include <iostream>
using namespace std;


void bubbleSort(int arr[], int n) {
	int count = 0;
	for (int i = 0; i < n - 1; i++) {
        	for (int j = 0; j < n - i - 1; j++) {
            		if (arr[j] > arr[j + 1]) {
                		swap(arr[j], arr[j + 1]);
				count += 1
            		}
        	}
    	}
}

int main() {
	cin >> N;
	int arr[N];

	for (int i = 0; i < N; i++) {
		cin >> arr[i]
	}

	int count = bubbleSort(arr, N);
	cout << count
	
}
