#include <bits/stdc++.h>
using namespace std;

struct Student {
	int id;
	int score;
	int problemsSolved;
	vector<int> stats;
};

bool cmp(Student x, Student y) {
	if (x.score != y.score) 
		return x.score > y.score;
	else if(x.problemsSolved != y.problemsSolved) 
		return x.problemsSolved > y.problemsSolved;	
	else 
		return x.id < y.id;
}	

int main() {
	
	int N, T, P;
	cin >> N >> T >> P;

	vector<Student> v(N);
	int notSolved[T] = {0};

	
	for (int i = 0; i < N; i++) {
		v[i].id = i+1;
		v[i].score = 0;
		v[i].problemsSolved = 0;

		for (int j = 0; j < T; j++) {
			int x;
			cin >> x;
			if (x == 1)
				v[i].problemsSolved ++;
			else
				notSolved[j] ++;
			
			v[i].stats.push_back(x); 
		}
	}

	for (Student &s: v) {
		for (int i = 0; i < T; i++) {
			s.score += s.stats[i] * notSolved[i];
		}
	}

	// sort based on score
	sort(v.begin(), v.end(), cmp);
	
	for (int i = 0; i < v.size(); i++) {
		if (v[i].id == P) {
			cout << v[i].score << " " << i+1;
		}
	}
}

