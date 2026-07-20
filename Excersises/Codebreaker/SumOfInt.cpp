#include <iostream>
using namespace std;

int sum(int arr[], int len) {
	int sum = 0;
	for (int i = 0; i < len; i++) {
		sum = arr[i] + sum;
	}

	return sum;
}

int main() {
	int n;
	cin >> n;
	int arr[10000];
	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}

	int total = sum(arr, n);

	cout << total;

	return 0;
}