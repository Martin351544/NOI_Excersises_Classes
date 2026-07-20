#include <iostream>
using namespace std;

int main() {
    int R, C;
    cin >> R >> C;

    int arr[26] = { 0 }; 
    arr[0] = 1;

    for (int i = 1; i < R; i++) {
        for (int j = i; j > 0; j--) {
            arr[j] = arr[j] + arr[j - 1];
        }
    }

    cout << arr[C - 1] << endl;

    return 0;
}