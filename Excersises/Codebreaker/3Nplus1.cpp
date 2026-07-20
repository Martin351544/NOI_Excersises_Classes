#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    while (true) {
        cout << n;

        if (n == 1) break;

        cout << " ";

        if (n % 2 == 0) {
            n = n / 2;
        }
        else {
            n = 3 * n + 1;
        }
    }

    return 0;
}