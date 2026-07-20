#include <bits/stdc++.h>
using namespace std;


// struct data types
// NEED SEMICOLON AT END OF STRUCT CURLY BRACE {};
// declare struct outside of main so cmp can uderstand what a Person is
struct Person{
		string name;
		int age;
		Person *spouse;
	};


// custom cmp (used for part about sorting structs)
bool cmp (Person x, Person y) {
	if (x.age == y.age) {
		return x.name > y.name;
	}

	return x.age < y.age;
}

int main() {
	
	Person a, b;
	a.name = "John";
	a.age = 45;
	a.spouse = &b;
	
	b.name = "alice";
	b.age = 39;
	b.spouse = &a;

	// use arrows to reference a variable in a struct (cleanest way)))
	// 					      |
	// 				             \/
	cout << a.name << " " << a.age << " " << a.spouse->name << endl;
	cout << b.name << " " << b.age << " "<< b.spouse->name << endl;
	
	// can also init a struct with {}
	Person c, d;
	c = {"Charlie", 24, &d};
	d = {"Anne", 23, &c};

	cout << c.name << " " << c.age << " " << c.spouse->name << endl;
	cout << d.name << " " << d.age << " " << d.spouse->name << endl;
	
	/*
	to sort a struct, sort using a custom comparator 
	Eg, to sort Person by age:
	comparator decalared up top(cmp)
	*/

	vector<Person> v = {a, b, c, d};

	sort(v.begin(), v.end(), cmp);
	
	cout << endl;

	for (int i = 0; i < v.size(); i++) {
		cout << v[i].name << " " << v[i].age << endl;
	}
}	




