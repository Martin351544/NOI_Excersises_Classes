#include <bits/stdc++.h>
using namespace std;

int main() {
	int N, D;

	cin >> N >> D;

	vector<int> v;
	
	int num;

	for (int i = 0; i < N; i++) {
		cin >> num;
		v.push_back(num);
	}

	sort (v.begin(), v.end(), greater<int>());

	int total = 0;

	for (int i = 0; i < D; i++) {
		total += v[i];
	}

	cout << total;


}
