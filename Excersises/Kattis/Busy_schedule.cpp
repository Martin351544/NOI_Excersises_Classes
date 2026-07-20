#include <iostream>
using namespace std;

int main() {

    int N;
    bool first = true;

    while (cin >> N && N != 0) {

        string times[N];
        int value[N];

        for (int i = 0; i < N; i++) {

            string time, half;
            cin >> time >> half;

            times[i] = time + " " + half;

            int hour = 0;
            int minute = 0;

            int k = 0;

            while (time[k] != ':') {
                hour = hour * 10 + (time[k] - '0');
                k++;
            }

            k++;

            minute = (time[k] - '0') * 10 + (time[k + 1] - '0');

            if (half == "a.m.") {

                if (hour == 12)
                    hour = 0;

            } else {

                if (hour != 12)
                    hour += 12;
            }

            value[i] = hour * 60 + minute;
        }

        for (int i = 0; i < N; i++) {

            for (int j = 0; j < N - 1; j++) {

                if (value[j] > value[j + 1]) {

                    int temp = value[j];
                    value[j] = value[j + 1];
                    value[j + 1] = temp;

                    string t = times[j];
                    times[j] = times[j + 1];
                    times[j + 1] = t;
                }
            }
        }

        if (!first)
            cout << endl;

        first = false;

        for (int i = 0; i < N; i++) {
            cout << times[i] << endl;
        }
    }

    return 0;
}
