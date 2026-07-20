#include <iostream>
using namespace std;

const int MAXP = 10000;   
const int MAXN = 10000;   

int main() {
    int n, rounds;
    cin >> n >> rounds;

    int guest[MAXP];
    int lucky[MAXP];

    for (int i = 0; i < MAXP; i++) {
        guest[i] = 0;
        lucky[i] = 0;
    }

    for (int i = 0; i < n; i++) {
        int g, l;
        cin >> g >> l;
        guest[g] = 1;
        lucky[g] = l;
    }

    long long total = 0;

    for (int r = 0; r < rounds; r++) {

        int freq[MAXN] = {0};

        for (int i = 0; i < MAXP; i++) {
            if (guest[i] == 1) {
                freq[lucky[i]]++;
            }
        }

        int minFreq = 1000000;

        for (int i = 0; i < MAXN; i++) {
            if (freq[i] > 0 && freq[i] < minFreq) {
                minFreq = freq[i];
            }
        }

        total += minFreq;

        if (r == rounds - 1) break;

        int c;
        cin >> c;

        for (int i = 0; i < c; i++) {
            int g, l;
            cin >> g >> l;

            if (l == 0) {
                guest[g] = 0;  
            } else {
                guest[g] = 1;
                lucky[g] = l;
            }
        }
    }

    cout << total << endl;

    return 0;
}
