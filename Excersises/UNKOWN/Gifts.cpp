#include <iostream>
using namespace std;

int main() {
    int N, K;
    cin >> N >> K;
    int arr[N];
    int diff;
    int gifts = 0;

    for (int i = 0; i < N; i++) {
        cin >> arr[i];
    }

    for (int i = 1; i < N; i++) {
        diff = arr[i] - arr[i - 1];

        if (diff <= -K) {
            gifts += 1;
        }

    }

    cout << gifts;
}
