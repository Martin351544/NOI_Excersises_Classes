#include <bits/stdc++.h>
using namespace std;

void mergeSort(int arr[], int start, int end) {
    if (start >= end) {
        return;
    }

    int mid = (start + end) / 2;

    mergeSort(arr, start, mid);
    mergeSort(arr, mid + 1, end);

    int size = end - start + 1;
    int c[size];

    int iA = start, iB = mid + 1, iC = 0;

    while (iA <= mid && iB <= end) {
        if (arr[iA] <= arr[iB]) {
            c[iC++] = arr[iA++];
        } else {
            c[iC++] = arr[iB++];
        }
    }

    while (iA <= mid) {
        c[iC++] = arr[iA++];
    }

    while (iB <= end) {
        c[iC++] = arr[iB++];
    }

    for (int i = 0; i < size; i++) {
        arr[start + i] = c[i];
    }
}

int main() {
    int N;
    cin >> N;

    int arr[N];

    for (int i = 0; i < N; i++) {
        cin >> arr[i];
    }

    mergeSort(arr, 0, N - 1);

    for (int i = 0; i < N; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}
