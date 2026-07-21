#include <iostream>
using namespace std;

int main() {
	int N;
	cin >> N;

	string str;
	cin >> str;

	int arr[26] = { 0 };
	
	for (int i = 0; i < N; i++) {
		int pos = (int)(str[i] - 97);
		arr[pos] += 1;
	}

	for (int i = 0; i < 26; i++) {
		
		cout << (char)(i + 97) << arr[i] << endl;
	}

	return 0;
}