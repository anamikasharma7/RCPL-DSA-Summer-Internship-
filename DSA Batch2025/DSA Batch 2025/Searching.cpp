#include <iostream>
using namespace std;


int linearSearchRecursive(int arr[], int size, int idx, int target) {
    
    if (idx == size) return -1;

   
    if (arr[idx] == target) return idx;

    
    return linearSearchRecursive(arr, size, idx + 1, target);
}

int main() {
    int arr[7] = {14, 78, 34, 99, 12, 90, 77};
    int target = 34;

    int result = linearSearchRecursive(arr, 7, 0, target);

    cout << "Idx: " << result << endl;
    return 0;
}
