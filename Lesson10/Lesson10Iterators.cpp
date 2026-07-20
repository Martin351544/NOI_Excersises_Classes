#include <bits/stdc++.h>
using namespace std;

int main() {
	vector<int> v = {33, 44, 55, 66, 77, 88};
	
	// datatype of iterator::iterator iteratorname = pointer that points to the first element of vector, condition, what to do

	for (vector<int>::iterator it=v.begin();it != v.end(); it ++) {
		cout << *it << endl;
	}
	

	cout << "##########" << endl;

	// can be simplified by using auto (slower)
	
	for (auto it=v.begin(); it!=v.end(); it++) {
		cout << *it << endl;
	}
	
	cout << "##########" << endl;

	// range based for loops
	
	// datatype var: vectorname   (can also use auto for unknown data type (slower))
	for (int x : v) {
		cout << x << endl;
	}


}
