#include <bits/stdc++.h>
using namespace std;

stack<int> s;
int reg = 0;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    cin.ignore();

    vector<string> program(n);

    for (int i = 0; i < n; i++) {
        getline(cin, program[i]);
    }

    int pc = 0;

    while (true) {
        string line = program[pc];

        string op;
        string operand = "";

        int space = line.find(' ');

        if (space != string::npos) {
            op = line.substr(0, space);
            operand = line.substr(space + 1);
        } else {
            op = line;
        }

        if (op == "PUSH") {
            s.push(stoi(operand));
        }

        else if (op == "STORE") {
            reg = s.top();
            s.pop();
        }

        else if (op == "LOAD") {
            s.push(reg);
        }

        else if (op == "PLUS") {
            int a = s.top();
            s.pop();
            int b = s.top();
            s.pop();

            s.push(a + b);
        }

        else if (op == "TIMES") {
            int a = s.top();
            s.pop();
            int b = s.top();
            s.pop();

            s.push(a * b);
        }

        else if (op == "IFZERO") {
            int value = s.top();
            s.pop();

            if (value == 0) {
                pc = stoi(operand);
                continue;
            }
        }

        else if (op == "DONE") {
            cout << s.top() << "\n";
            break;
        }

        pc++;
    }

    return 0;
}
