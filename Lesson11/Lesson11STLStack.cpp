#include <iostream>
using namespace std;

int main() {
	stack<int> s( {1, 22, 33, 12, 41} );

	s.push(19);
	s.push(303);
	s.push(10);
	s.push(63);

	
	cout << s.top() << endl;

	s.pop();

	cout << s.top() << endl;
	
	while (!s.empty()) {
		cout << s.top() << " ";
		s.pop();
	}

	s = stack<int> ();

}
