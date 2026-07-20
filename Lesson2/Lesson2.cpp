#include <iostream>
using namespace std;

/*
 Intro to functions
 void returns nothing 
 int returns int 
 string well,  returns string

 (Theres also bool and all the other types)
 */


string sayHello() {
	return "Hello world from function";
}

string sayHelloWName(string name) {
	return "Hello " + name;
}

int add(int x, int y) {
	return x + y;
}

int factorial(int num) {
	if (num == 1) {
		return 1;
	}
	else {
		return num * factorial(num - 1);
	}
}

int main() {
	cout << "##### NOI Lesson 2 #####" << endl;

	cout << endl << "%%% For Loops + Continue %%%" << endl;
	cout << endl;

	for (int i = 0; i < 10; i ++) {
		cout << "Loop itereation: " << i + 1 << endl;
		if (i == 7) {
			continue;
		}
	}

	cout << endl << "%%% While Loops + Break %%%" << endl;

	int num = 0;

	while (num % 2 == 0) {
		cout << num << endl;
		cin >> num;

		if (num > 100) {
			cout << "number too big EXITING";
			break;
		}
	
	}

	cout << endl << "%%% Arrays %%%" << endl;

	int arr[5];
	for (int i = 0; i < 5; i++) {
		cout << "array value 1: " << endl;
		cin >> num;

		arr[i] = int(num);
	}

	cout << endl << "arry vals: " << endl;

	for (int j = 0; j < 5; j++) {
		cout << "array value " << j << " is : " << arr[j] << endl;
	}

	cout << endl << "%%% Functions %%%" << endl;

	cout << sayHello() << endl;

	cout << sayHelloWName("Martin") << endl;

	cout << add(1, 7) << endl;

	cout << "fatorial of 6: " << factorial(6);

	cout << endl << "%%% String handeling %%%" << endl;

	string name = "John";

	cout << name << endl;

	cout << name[0] << endl;

	cout << name.at(0) << endl;

	cout << name.length() << endl;

	string anotherName = "Bob";

	if (name > anotherName) {
		cout << name << endl;
	}
	else {
		cout << anotherName << endl;
	}

	char letter = 'z';

	cout << (int) letter << endl;

	cout << endl << "########## END ##########";
}	
