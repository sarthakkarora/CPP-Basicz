#include <iostream>
using namespace std;

void findMinMax(int arr[], int n) {
    int minVal = arr[0], maxVal = arr[0];

    for (int i = 1; i < n; i++) {
        minVal = min(minVal, arr[i]);
        maxVal = max(maxVal, arr[i]);
    }
    cout << "Min: " << minVal << ", Max: " << maxVal;
}

int main() {
    int arr[] = {3, 1, 5, 9, 2};
    int n = sizeof(arr) / sizeof(arr[0]);

    findMinMax(arr, n);
    return 0;
}
