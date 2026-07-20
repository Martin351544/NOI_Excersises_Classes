#include <bits/stdc++.h>
using namespace std;

int main() {
	vector <int> v;
	int X;

	while (cin >> X) {
		if (X == -1) {
			break;
		}

		v.push_back(X);
	
	}

	int sum = 0;

	for (int i = 0; i < v.size(); i ++) {
		sum += v[i];
	}

	cout << sum;

}
