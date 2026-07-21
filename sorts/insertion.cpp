#include <bits/stdc++.h>
using namespace std;

void insertionSort(vector<int>& arr) {
	// get array size
	int n = arr.size();

	for (int i = 0; i < n; i++) {
		int key = arr[i]; // value where to insert
		int j = i - 1;

		// move bigger elements 1 pos right
		while (j >= 0 && arr[j] > key) {
			arr[j + 1] = arr[j];
			j--;
		}
		
		// put key in its correct place
		arr[j + 1] = key;

	}
}


int main() {
	vector<int> a = {5,3,8,4,2};
	insertionSort(a);

	for (int x: a) {
		cout << x << " ";
	}


}
