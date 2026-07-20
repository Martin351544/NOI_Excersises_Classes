#include <iostream>
using namespace std;

int main() {
    int N;
    cin >> N;

    int arr[20];

    for (int t = 0; t < N; t++) {

        int dataNum;
        cin >> dataNum;

        for (int i = 0; i < 20; i++) {
            cin >> arr[i];
        }

        int steps = 0;

        // insertion sort with step counting
        for (int i = 1; i < 20; i++) {
            int key = arr[i];
            int j = i - 1;

            while (j >= 0 && arr[j] > key) {
                arr[j + 1] = arr[j];
                j--;
                steps++;
            }

            arr[j + 1] = key;
        }

        cout << dataNum << " " << steps << endl;
    }

    return 0;
}
