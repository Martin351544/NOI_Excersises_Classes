#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, s;
    cin >> n >> s;

    int arr[n];
    int total = 0;

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
        total += 2 * arr[i];
    }

    sort(arr, arr + n, greater<int>());

    for (int i = 0; i < s && i < n; i++) {
        total -= arr[i];
    }

    cout << total;

    return 0;
}