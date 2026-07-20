#include <bits/stdc++.h>
using namespace std;

int main() {
	// queue data type FIFO
	queue<int> myqueue({1, 4, 89, 22, 11});


	// queue.push(Num) adds num to front of queue

	myqueue.push(23);
	myqueue.push(45);
	myqueue.push(18);
	myqueue.push(77);


	// myqueue.pop(); to remove first element


	cout << myqueue.front() << endl;
	cout << myqueue.back() << endl;
	cout << myqueue.size() << endl;
	cout << myqueue.empty() << endl; // gives true or false
	
	//const int size = myqueue.size();

	//for (int i = 0; i<size; i++) {
	//	cout << myqueue.front() << " ";
	//	myqueue.pop();
	//}
	

	// better way to iterate:
	while (!myqueue.empty()) {
		cout << myqueue.front() << " ";
		myqueue.pop();
	}

	// to empty the queue:
	myqueue = queue<int>();
	
	cout << myqueue.size() << endl;

}	


