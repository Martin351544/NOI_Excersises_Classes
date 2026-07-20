#include <iostream>
#include <algorithm>
using namespace std;

int main() {
	int N;
	int L;

	cin >> N >> L;
	int scores[N];
	for (int i = 0; i< N; i ++) {
		string s;
		cin >> s;
		
		int score = 0;

		for (char c : s) {
			score += int(toupper(c)) - int('A') + 1;
		}

		scores[i] = score;

	}	

	sort (scores, scores + N, greater<int>());
	
	int total = 0;
	for (int i = 0; i < L; i ++) {
		total += scores[i];
	}

	cout << total;

}
