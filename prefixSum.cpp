#include<iostream>
using namespace std;

// calculating the PREFIX SUM ARRAY
void PrefixSum(int arr[], int n) {
    // Complexity -> O(n)
    // sum must be done from the indx-1.
    //the first element always remains the same.
    for (int i = 1; i < n; i++) {
        arr[i] = arr[i]+arr[i-1];
    }
}

int main() {
    int arr[] = {6, 3, -2, 4, -1, 0, -5};
    int n = sizeof(arr)/sizeof(arr[0]);
    PrefixSum(arr, n);
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
}