#include <iostream>
using namespace std;

int main() {
	cout << "##### Even/Odd detector #####" << endl;
	
	int num;
	cout << "Please enter a num: ";
	cin >> num;
	if (num % 2 == 0) {
		cout << "Even" << endl;
	}else {
		cout << "Odd" << endl;
	}

	return 0;
}