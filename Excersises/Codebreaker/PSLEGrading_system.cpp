#include <iostream>
using namespace std;

int main() {
	int score;
	cin >> score;
	if (score >= 91) {
		cout << "A*";
	}

	else if (score >= 75 and score <= 90) {
		cout << "A";
	}

	else if (score >= 60 and score <= 74) {
		cout << "B";
	}

	else if (score >= 50 and score <= 59) {
		cout << "C";
	}

	else if (score >= 35 and score <= 49) {
		cout << "D";
	}

	else if (score >= 20 and score <= 34) {
		cout << "E";
	}

	else if (score < 20) {
		cout << "U";
	}

	return 0;

}
