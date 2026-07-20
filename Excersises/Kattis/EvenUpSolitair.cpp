#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    vector<int> st;

    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;

        int parity = x % 2;

        if (!st.empty() && st.back() == parity) {
            st.pop_back();   // remove the pair
        } else {
            st.push_back(parity);
        }
    }

    cout << st.size() << '\n';

    return 0;
}
