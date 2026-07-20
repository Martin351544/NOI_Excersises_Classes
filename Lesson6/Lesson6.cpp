#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int N = 6;
    int arr[6] = {11, 22, 33, 15, 26, 9};
    
    // sort function with arr (built in method is NOT the most efficient)
    sort (arr, arr + N, greater<int>());	

    for (int i = 0; i < N; i++) {
        cout << arr[i] << " ";
    }
}


