#include <bits/stdc++.h>
using namespace std;

void bubbleSort(int n, vector<int>& v ){
	// first outer loop	
	for (int i = 0; i < n; i++) {
		// second inner loop
		for (int j = 0; j < n - i - 1; j ++) {
			// comparison
			if(v[j] < v[j + 1]) {
				int temp = v[j];
				v[j] = v[j + 1];
				v[j + 1] = temp;
			}
		}
	}
} 

int main() {
	
	vector<int> vec = {12, 23, 19, 1, 12, 11, 9, 2, 3};

	bubbleSort(vec.size(), vec);
	for (int x: vec) {
		cout << x << " ";
	}
}
