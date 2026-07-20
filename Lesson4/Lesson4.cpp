#include <iostream>
using namespace std;

void bubbleSort(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                swap(arr[j], arr[j + 1]);
            }
        }
    }
}

void insertionSort(int arr[], int n) {
    for (int i = 1; i < n; i++) {
        int key = arr[i];
        int j = i - 1;
        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = key;
    }
}

// Selection Sort
void selectionSort(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        int minIndex = i;
        for (int j = i + 1; j < n; j++) {
            if (arr[j] < arr[minIndex]) {
                minIndex = j;
            }
        }
        swap(arr[i], arr[minIndex]);
    }
}

void printArray(int arr[], int n) {
    for (int i = 0; i < n; i++) cout << arr[i] << " ";
    cout << endl;
}

int main() {
    int bubbleArr[] = { 64, 34, 25, 12, 22, 11, 90 };
    int insertionArr[] = { 12, 11, 13, 5, 6 };
    int selectionArr[] = { 29, 10, 14, 37, 13 };

    int n1 = sizeof(bubbleArr) / sizeof(bubbleArr[0]);
    int n2 = sizeof(insertionArr) / sizeof(insertionArr[0]);
    int n3 = sizeof(selectionArr) / sizeof(selectionArr[0]);

    cout << "Bubble Sort Example:\nOriginal: ";
    printArray(bubbleArr, n1);
    bubbleSort(bubbleArr, n1);
    cout << "Sorted:   ";
    printArray(bubbleArr, n1);

    cout << "\nInsertion Sort Example:\nOriginal: ";
    printArray(insertionArr, n2);
    insertionSort(insertionArr, n2);
    cout << "Sorted:   ";
    printArray(insertionArr, n2);

    cout << "\nSelection Sort Example:\nOriginal: ";
    printArray(selectionArr, n3);
    selectionSort(selectionArr, n3);
    cout << "Sorted:   ";
    printArray(selectionArr, n3);

    return 0;
}
