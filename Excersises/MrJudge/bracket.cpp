#include <bits/stdc++.h>
using namespace std;

int main() {
    int L;
    cin >> L;

    string s;
    cin >> s;

    stack<char> st;
    bool valid = true;

    for (char c : s) {
        if (c == '(' || c == '[' || c == '{') {
            st.push(c);
        } 
        else {
            if (st.empty()) {
                valid = false;
                break;
            }

            char top = st.top();
            st.pop();

            if ((c == ')' && top != '(') ||
                (c == ']' && top != '[') ||
                (c == '}' && top != '{')) {
                valid = false;
                break;
            }
        }
    }

    if (!st.empty()) {
        valid = false;
    }

    cout << (valid ? "Valid" : "Invalid");

    return 0;
}
