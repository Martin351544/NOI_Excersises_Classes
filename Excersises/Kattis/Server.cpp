
#include <bits/stdc++.h>
using namespace std;

int main() {
	int N;

	int T;

	cin >> N >> T;

	queue<int> Min;
	
	int  num;
	for (int i = 0; i < N; i++) {
		cin >> num;
		Min.push(num);	
	}

	int count = 0;
	int diff = 0;
	while (!Min.empty()) {
		diff = T - Min.front();
		T = T-Min.front();
		if (diff >= 0) {
			count ++;	
			Min.pop();
		}else {
			break;
		}
	}	

	cout << count;
	
}
