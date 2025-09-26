

#include <iostream>
using namespace std;

void bubbleSort(int arr[], int size) {
    for (int i = 0; i < size - 1; i++) {
        // Last i elements are already sorted, so skip them
        for (int j = 0; j < size - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                // Swap if elements are in the wrong order
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

int main() {
    int arr[6] = {10, 19, 13, 18, 17, 14};

    bubbleSort(arr, 6);

    // Print sorted array
    for (int i = 0; i < 6; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}

