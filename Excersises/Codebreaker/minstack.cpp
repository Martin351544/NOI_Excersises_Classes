#include <bits/stdc++.h>
using namespace std;


stack<int> s;
stack<int> mn;

void push(int x) {
	s.push(x);
	if(mn.empty() || x <= mn.top()) {
		mn.push(x);
	}
}

int top() {
		return s.top();
}
	
void pop() {
	if(s.top() == mn.top()) {
		mn.pop();
	}
	
	s.pop();
}

int getMin() {
	return mn.top();
}
