#include <iostream>
using namespace std;

// use pointers to not make a copy of the numbers
void swapNumbers(int *x, int *y) {
	int temp = *x;
	*x = *y;
	*y = temp;
}


// sum array function
int sum_array(int *arr, int size) {
	int sum = 0;

	for (int i = 0; i < size; i++) {
		sum += (*arr + i);
	}

	return sum;
}

int main(){
	// pointers
	cout << "###### POINTERS ######" << endl;
	int n = 6;
	int *p = &n;

	cout << n << endl;
	
	cout << &n << endl;

	cout << *p << endl;

	cout << p << endl;

	cout << &p << endl;

	int x = 12;
	int y = 25;

	cout << "X: " << x << endl;
	cout << "Y: "  << y << endl;

	swapNumbers(&x, &y);

	cout << "X: " << x << endl;
	cout << "Y: " << y << endl;

	int arr[5] = { 1, 2, 3, 4, 5 };

	cout << sum_array(arr, 5);

}
 
