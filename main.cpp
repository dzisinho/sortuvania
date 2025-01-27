 
#include <iostream>
using namespace std;

void flip(int arr[], int end) {
    for (int i = 0; i < end / 2; i++) {
        swap(arr[i], arr[end - i - 1]);
    }
}

int findMaxIndex(int arr[], int n) {
    int maxIndex = 0;
    for (int i = 1; i < n; i++) {
        if (arr[i] > arr[maxIndex]) {
            maxIndex = i;
        }
    }
    return maxIndex;
}
void pancakeSort(int arr[], int size) {
    for (int currSize = size; currSize > 1; currSize--) {
        int maxIndex = findMaxIndex(arr, currSize);

        if (maxIndex != currSize - 1) {
            if (maxIndex > 0) {
                flip(arr, maxIndex + 1);
                cout << "Flip at " << maxIndex + 1 << ": ";
                for (int i = 0; i < size; i++) cout << arr[i] << " ";
                cout << endl;
            }
            flip(arr, currSize);
            cout << "Flip at " << currSize << ": ";
            for (int i = 0; i < size; i++) cout << arr[i] << " ";
            cout << endl;
        }
    }
}

void printArray(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main() {
    int pancakes[] = { 3, 6, 1, 8, 4, 7 };
    int size = sizeof(pancakes) / sizeof(pancakes[0]);

    cout << "Original stack: ";
    printArray(pancakes, size);

    pancakeSort(pancakes, size);

    cout << "Sorted stack: ";
    printArray(pancakes, size);

    return 0;
}
