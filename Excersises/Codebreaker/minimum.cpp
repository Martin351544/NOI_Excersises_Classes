#include <bits/stdc++.h>
using namespace std;

int findMin(int N, int A[]) {
	int min = 999999;
	for (int i = 0; i < N; i ++) {
		if (A[i] < min) {
			min = A[i];
		}
	}

	return min;
}
