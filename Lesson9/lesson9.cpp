#include <bits/stdc++.h>
using namespace std;


//custom comparator for decending sort
bool decending_cmp(int x, int y) {
	return x > y;
}

int main() {
	
	int arr[5] = {6, 3, 5, 6, 7};
	
	// uses a custom comparator
	sort (arr, arr + 5, decending_cmp);

	for (int i = 0; i < N; i ++) {
		cout >> arr[i];
	}

}
