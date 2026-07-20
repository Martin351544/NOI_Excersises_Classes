#include <bits/stdc++.h>
using namespace std;

int main() {
	
	int N, linut;
	cin >> N;

	int x[N], y[N];

	for (int i = 0; i < N; i ++) {
		cin >> x[i], y[i];
	}

	sort(x, x + N);
	sort(y, y + N);

	cout << x[N/2] << " " << y[N / 2];


	return 0;
}
