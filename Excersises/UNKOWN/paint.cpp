#include <iostream>
#include <algorithm>
using namespace std;

int main () {
	int N;
	cin >> N;

	int total_cost = 0;
	
	int increments[N];

	for (int i = 0; i < N; i ++) {
		int cost;
		cin >> cost;
		
		total_cost += cost;
	}

	for (int i = 0; i < N; i ++) {
		cin >> increments[i];
	}
	
	sort(increments, increments + N, greater<int>());


	for (int i = 0; i < N - 1; i ++) {
		total_cost += increments[i] * i;	
	}

	cout << total_cost;

}
