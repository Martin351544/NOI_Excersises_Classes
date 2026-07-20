#include <bits/stdc++.h>
using namespace std;

int main() {
	int N;
	cin >> N;

	vector<int> vec;
	for (int i =0; i < N; i ++) {
		int Num;
		cin >> Num;
		vec.push_back(Num);
	}

	sort(vec.begin(), vec.end(), greater<int>());

	for (int i = 0; i < N; i++) {
		cout << vec[i] << " ";
	}
}

