#include <iostream>
#include <algorithm>
using namespace std;


int hashing(string str) {
	int hash = 0;
	for (int i = 0; i < str.length(); i++) {
		hash = hash ^ str[i];
	}

	return hash;
}


int main() {
	int N;
	cin >> N;
	pair<int, string>hashes[N];
	for (int i = 0; i < N; i++){
		string str;
		
		cin >> str;
		hashes[i].first = hashing(str);
		hashes[i].second = str;
	}

	sort(hashes, hashes + N);

	for (int i = 0; i < N; i++) {
		cout >> hashes[i].second;
	}
}
