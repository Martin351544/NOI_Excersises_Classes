#include <bits/stdc++.h>
using namespace std;
	
int main() {
	// ### STL VECTORS(resizeable arrays) ###
	// format is vector<datatype> name = {}
	
	vector<int> vec = {0, 0, 0};

	// to add value use vectorname.push_back(element);
	
	vec.push_back(99);
	vec.push_back(12);
	vec.push_back(34);
	vec.push_back(76);
	vec.push_back(146);
	vec.push_back(121);
	vec.push_back(23);
	vec.push_back(324);
	
	// to remove value from vector do vectorname.pop_back() removes last inserted element
	vec.pop_back();
	vec.pop_back();

	// to get vector size do vectorname.size()
	for (int i = 0; i < vec.size(); i++) {
		cout << vec[i] << " ";
	}

	cout << "##### " << endl;
	

	// to clear vector size to 0 do vectorname.clear() (this keeps all elements in the arr)
	vec.clear();


	// vectorname.assign(N, V) rezises vecor to size N and sets all values to 
	vec.assign(5, 100);
	for (int i = 0; i < vec.size(); i++) {
		cout << vec[i] << " ";
	}
	cout << "##### " << endl;


	////////////////////////////////////////////////////////////////////////////////////////
	// vector of other data types
	

	vector<string>v;

	v.push_back("John");
	v.push_back("Bob");
	v.push_back("Joe");

	//////////////////////////////////////////////////////////////////////////////////////
	// vector of vectors
	// similar to 2d arr
	vector<vector <int>> ver;

	vector<int> v1 = {23, 33, 43, 53, 61};
	vector<int> v2 = {22, 32, 42, 52};
	vector<int> v3 = {21, 31, 41, 51, 61, 71};
	
	ver.push_back(v1);
	ver.push_back(v2);
	ver.push_back(v3);
	
	for (int i = 0; i < ver.size(); i++) {
		for (int j = 0; j < ver[i].size(); j ++) {
			cout << ver[i][j] << " ";
		}
	}

	cout << "##### " << endl;

	///////////////////////////////////////////////////////////////////////////////////
	// vector of pairs
	vector <pair <int, int>> V;

	V.push_back({22, 44});
	V.push_back({33, 55});

	for (int i = 0; i < V.size(); i ++) {
		cout << "(" << V[i].first << " " << V[i].second << ") ";
	}

	cout << "##### " << endl;

	/////////////////////////////////////////////////////////////////////////////////
	// to sort a vector
	
	vector <int>V1 = {44, 55, 66, 77};

	sort (V1.begin(), V1.end(), greater<int>());

	for (int i = 0; i < V1.size(); i ++) {
		cout << V1[i] << " ";
	}

	cout << "##### " << endl;


}	

