#include <iostream>
#include <algorithm>
using namespace std;

bool cmp(const string &a, const string &b) {
    return a.length() > b.length();
}

int main() {
    int n;
    cin >> n;

    string words[n]; // your way

    for (int i = 0; i < n; i++) {
        cin >> words[i];
    }

    stable_sort(words, words + n, cmp);

    for (int i = 0; i < n; i++) {
        cout << words[i] << '\n';
    }

    return 0;
}
