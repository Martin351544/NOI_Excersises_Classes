#include <bits/stdc++.h>
using namespace std;

/*
 if you dont pass a pointer to a function that function will make a copy of that variable
 this is called pass by value
 */
void swap (int* x, int* y) {
	// use a deref to the variables to access them
	
	int temp = *x;
	*x = *y;
	*y = temp;
}

int main() {
	
	/* 
	sometimes a pointer points to nothing (used to make it point to nothing)
	this is used to work like setting a variable to 0 (to make it not contain garbage).
	to do this:
	*/
	int* p = nullptr;


	/*
	&x stores the addres of the variable 
	here p stores the address
	doing int* p = &x the * in int sais it's a pointer
	the asterix is a derefrence (deref) of the variable so here doing *p will give x
	also a pointer type MUST match the variable
	*/

	int x = 10;
	p = &x;
	
	// check if the pointer is not null
	if (p != nullptr)
		cout << *p << endl; // gives 10 (derefs p)
	

	// you can also change the variable thru a pointer by derefing it
	*p = 50;

	cout << x << endl;

	// pointer pointing to pointer pointing to a variable
	int** pp = &p;

	// now to print the address of p 
	cout << *pp << endl;

	// and to print x 
	cout << **pp << endl;

	/*
	arrays pointers
	in an array the name is the pointer to the first element of the array
	so with an array arr that has 1, 2, 3 doing *arr will print 1 and *arr+1 will print 2 and so on
	*/

	int arr[4] = {1, 2, 3, 4};
	cout << *arr << " " << *arr+1 << " " << *arr+2 << " " << *arr+3 << endl;

	// looping with pointers
	int* q = arr;
	for (int i = 0; i < 4; i++) {
		cout << *(q+i) << " "; 
	}
	cout << endl;

	int a = 0;
	int b = 12;
	
	// call the function using a pointer to it
	swap (&a, &b);

	cout << a << " " << b;


}

