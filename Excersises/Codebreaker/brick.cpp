#include <bits/stdc++.h>
using namespace std;

int main() {
    stack<long long> input;
    stack<long long> bricks;

    int N;
    cin >> N;

    long long x;

    for (int i = 0; i < N; i++) {
        cin >> x;
        input.push(x);
    }

    stack<long long> order;
    while (!input.empty()) {
        order.push(input.top());
        input.pop();
    }

    while (!order.empty()) {
        long long cur = order.top();
        order.pop();

        while (!bricks.empty() && bricks.top() <= cur) {
            bricks.pop();
        }

        bricks.push(cur);
    }

    while (!bricks.empty()) {
        cout << bricks.top() << "\n";
        bricks.pop();
    }

    return 0;
}
