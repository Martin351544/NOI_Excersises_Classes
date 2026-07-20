#include <bits/stdc++.h>
using namespace std;

int main() {
	int N;

	cin >> N;

	int a[N];
	int b[N];

	for (int i = 0; i <N; i++) {
		cin >> a[i];
	}


	for (int i = 0; i <N; i++) {
		cin >> b[i];
	}

	int E;

	cin >> E;

	sort(a, a + N);

	sort(b, b + N, greater<int>());

	int total = 0;

	for (int i = 0; i < N; i ++) {
		int excess = a[i] + b[i] - E;
		if (excess > 0) total += 100 * excess;
	}
	

	cout << total;
}
