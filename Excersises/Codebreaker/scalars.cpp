#include <bits/stdc++.h>
using namespace std;

bool decs(int x, int y) {
	return x > y;

}

int main() {
	int N;

	cin >> N;

	long long x[N];
	long long y[N];
	
	for (int i = 0; i < N; i ++) {
		cin >> x[i];
	}
	
	for (int i = 0; i < N; i++) {
		cin >> y[i];
	}

	sort (x, x + N);

	sort (y, y + N, decs);

	long long total = 0;

	for (int i = 0; i < N; i++) {
		total = total + x[i] * y[i]; 
	}

	cout << total;

}
