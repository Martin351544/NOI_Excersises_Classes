#include <iostream>
using namespace std;

int main() {
	int N;
	long long A, B;
	cin >> N >> A >> B;


	//dist, id
	pair <long long, int> buildings[N];

	for (int i = 0; i < N;i++) {
		long long x, y;

		cin >> x >> y;
	
		long long distance = abs(x-A) + abs(y-B);
		
		buildings[i] = {distance, i + 1};
	}

	sort(buildings, buildigs+N);

	for (int i = 0; i<N; i++) {
		cout << buildings[i].second << " ";
	}
}
