#include <bits/stdc++.h>
using namespace std;

long long ans = 0;

void mergeSort(vector<int>& a, int l, int r) {
    if (l >= r) return;

    int m = (l + r) / 2;

    mergeSort(a, l, m);
    mergeSort(a, m + 1, r);

    vector<int> temp;
    int i = l, j = m + 1;

    while (i <= m && j <= r) {
        if (a[i] <= a[j]) {
            temp.push_back(a[i]);
            i++;
        } 
        else {
            temp.push_back(a[j]);
            j++;
            ans += (m - i + 1); // count inversions
        }
    }

    while (i <= m) {
        temp.push_back(a[i]);
        i++;
    }

    while (j <= r) {
        temp.push_back(a[j]);
        j++;
    }

    for (int k = l; k <= r; k++) {
        a[k] = temp[k - l];
    }
}

int main() {
    int T;
    cin >> T;

    while (T--) {
        int N;
        cin >> N;

        vector<int> a(N);

        for (int i = 0; i < N; i++)
            cin >> a[i];

        ans = 0;

        mergeSort(a, 0, N - 1);

        cout << ans << "\n";
    }
}
