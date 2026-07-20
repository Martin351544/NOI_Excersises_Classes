#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int N, C;
    cin >> N >> C;

    int vacancies[C + 1];

    for (int i = 1; i <= C; i++) {
        cin >> vacancies[i];
    }

    int score[N];
    int choices[N][5];
    int order[N];
    int ans[N];

    for (int i = 0; i < N; i++) {
        cin >> score[i];

        for (int j = 0; j < 5; j++) {
            cin >> choices[i][j];
        }

        order[i] = i;
        ans[i] = -1;
    }

    sort(order, order + N, [&](int a, int b) {
        if (score[a] != score[b])
            return score[a] < score[b];
        return a < b; // tie-break by input order
    });

    for (int k = 0; k < N; k++) {
        int student = order[k];

        for (int j = 0; j < 5; j++) {
            int course = choices[student][j];

            if (vacancies[course] > 0) {
                vacancies[course]--;
                ans[student] = course;
                break;
            }
        }
    }

    for (int i = 0; i < N; i++) {
        cout << ans[i] << '\n';
    }
}
