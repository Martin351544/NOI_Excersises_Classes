#include <iostream>
using namespace std;

int main() {
    int P;
    cin >> P;

    while (P--) {
        int caseNum;
        cin >> caseNum;

        int line[25];  
        int size = 0;
        long long steps = 0;

        for (int i = 0; i < 20; i++) {
            int x;
            cin >> x;

            int pos = 0;

            while (pos < size && line[pos] < x) {
                pos++;
            }

            steps += (size - pos);

            for (int j = size; j > pos; j--) {
                line[j] = line[j - 1];
            }

            line[pos] = x;
            size++;
        }

        cout << caseNum << " " << steps << "\n";
    }

    return 0;
}
