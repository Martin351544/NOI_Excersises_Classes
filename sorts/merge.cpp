#include <bits/stdc++.h>
using namespace std;


void mergesort(int arr[], int start, int end) {
	
	// if sub arr has only 1 element then it is sorted	
	if (start == end) {
		return;
	}
	
	// find midpoint
	int mid = (start + end) / 2;

	// recursively sort each part
	mergesort(arr, start, mid);
	mergesort(arr, mid+1, end);
	
	// create temp arr
	int c[end - start + 1];
	
	// init pointers
	int ia = start, ib = mid + 1, ic = 0;
	
	// merge everything back
	while(ia <= mid && ib <= end){

    		if(arr[ia] <= arr[ib]){
        		c[ic] = arr[ia];
        		ia++;
        		ic++;
    		}else{
        		c[ic] = arr[ib];
        		ib++;
        		ic++;
   		}

	}	
	
	while (ia<=mid) {
		c[ic] = arr[ia];
		ia ++;
		ic ++;
	}

	while (ib<=end) {
		c[ic] = arr[ib];
		ib ++;
		ic ++;
	}

	for (int i = 0; i < ic; i++) {
 		arr[start + i] = c[i];
	}


}

int main() {

	int arr[] = {5, 3, 8, 4, 2, 1};

	int n = sizeof(arr) / sizeof(arr[0]);

	mergesort(arr, 0, n - 1);

	for (int x: arr) {
		cout << x << " "; 
	}
}
