#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int arr[] = {10, 12, 11, 19, 17, 16};
    int index[] = {0, 2, 1, 5, 4, 3};
    int n = sizeof(arr) / sizeof(arr[0]);

    
    vector<pair<int, int>> paired;//Create vector of pairs (index, value)
    for (int i = 0; i < n; i++) {
        paired.push_back({index[i], arr[i]});
    }

    //Sort based on the index (first element of pair)
    sort(paired.begin(), paired.end());

    
    for (int i = 0; i < n; i++) {//Extract sorted values
        arr[i] = paired[i].second;
    }

    
    cout << "Sorted array according to index: ";//Print sorted array
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}