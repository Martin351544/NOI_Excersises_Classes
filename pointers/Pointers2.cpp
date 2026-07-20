#include <bits/stdc++.h>
using namespace std;

int main() {
	// Dynamic memory
	int* p = new int; // this creates a new int at that memory
	*p = 42; // assigns a value to this int
	
	// Free the memory
	delete p;
	p = nullptr;
	
	// Dynamic Arrays
	int n = 5;
	int* arr = new int[n];

	// now you can use it like a normal arr;
	arr[0] = 12;
	arr[1] = 1;
	arr[2] = 15;
	arr[3] = 11;
	arr[4] = 16;

	for (int i = 0; i < n; i ++) {
		cout << *(arr+i) << endl;
	}

	// then to delete it 
	delete[] arr;
}
