#include <iostream>
using namespace std;

int main() {
	// pairs
	pair<int, int> A;
	
	// Access first and second variables in pair
	A.first = 30;
	A.second = 44;

	cout << A.first << " " << A.second << endl;

	pair<int, int> B;
	// another way to decalre it
	B = make_pair(22, 33);

	cout << B.first << " " <<B.second << endl;

	pair<int, int> C;
	C = {77, 88}; // works only for C++ 11 or later Version

	cout << C.first << " " << C.second << endl;
}
