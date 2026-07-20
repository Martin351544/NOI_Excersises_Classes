#include <bits/stdc++.h>
#include <ctime>
using namespace std;

int minimum(int N, int A[]) {
	int min = INT_MAX;
	for (int i = 0; i < N; i++) {
		if (A[i] < min) {
			min = A[i];
		}
	}

	return min;
}

string gradeMin(int N, int A[]) {
	
	startTime();
	int res = findMin(N, A);
	float time =stopTime(); 
	
	if (time > 500)
		return "Time Limit Exceeded";
	else if (res == minimum(N, A)) 
		return "Accepted";
	else 
		return "Wrong Answer";
}

