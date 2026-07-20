#include <bits/stdc++.h>
using namespace std;

int main() {
	int N, D;

	cin >> N >> D;

	int arr[N];
	
	for (int i = 0; i < N; i ++) {
		cin >> arr[i];
	}

	sort(arr, arr+N, greater<int>());
	
	int total = 0;

	for (int i = 0; i < D; i++) {
		total += arr[i];
	}

	cout << total;
}
