#include <bits/stdc++.h>
using namespace std;

class FastScanner {
    static const int BUFSIZE = 1 << 20;
    int idx = 0, size = 0;
    char buf[BUFSIZE];

    inline char getChar() {
        if (idx >= size) {
            size = fread(buf, 1, BUFSIZE, stdin);
            idx = 0;
            if (size == 0) return 0;
        }
        return buf[idx++];
    }

public:
    int nextInt() {
        char c;
        int x = 0;
        do {
            c = getChar();
        } while (c <= ' ');

        while (c >= '0' && c <= '9') {
            x = x * 10 + (c - '0');
            c = getChar();
        }
        return x;
    }
};

int main() {
    FastScanner fs;

    int N = fs.nextInt();

    vector<int> diff(N);
    vector<unsigned char> pref(N);

    int bestSum = -1;

    for (int i = 0; i < N; i++) {
        int x = fs.nextInt();
        int y = fs.nextInt();

        int sum = x + y;
        diff[i] = y - x;

        if (sum > bestSum) {
            pref[i] = 1;
            bestSum = sum;
        }
    }

    int ans = 0;
    int bestDiff = -2000000000;

    for (int i = N - 1; i >= 0; i--) {
        if (pref[i] && diff[i] > bestDiff)
            ans++;

        if (diff[i] > bestDiff)
            bestDiff = diff[i];
    }

    printf("%d\n", ans);
    return 0;
}
