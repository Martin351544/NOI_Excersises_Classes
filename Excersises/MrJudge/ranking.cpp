#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int N, S;
    cin >> N >> S;

    long long sum[N];
    int highest[N];
    int median[N];
    int id[N];

    for (int i = 0; i < N; i++) {
        int a[S];

        sum[i] = 0;
        highest[i] = 0;
        id[i] = i + 1;

        for (int j = 0; j < S; j++) {
            cin >> a[j];
            sum[i] += a[j];
            if (a[j] > highest[i]) highest[i] = a[j];
        }

        sort(a, a + S);

        if (S % 2 == 1) {
            median[i] = a[S / 2];
        } else {
            median[i] = a[S / 2 - 1] + a[S / 2];
        }
    }

    int order[N];
    for (int i = 0; i < N; i++) order[i] = i;

    sort(order, order + N, [&](int x, int y) {
        if (sum[x] != sum[y]) return sum[x] > sum[y];
        if (highest[x] != highest[y]) return highest[x] > highest[y];
        if (median[x] != median[y]) return median[x] > median[y];
        return id[x] < id[y];
    });

    for (int i = 0; i < N; i++) {
        cout << id[order[i]] << "\n";
    }

    return 0;
}
