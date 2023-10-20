#include<iostream>
using namespace std;

// calculating the PREFIX SUM ARRAY in a given range
// Formula : arr[i, j] = arr[j] - arr[i-1]
void PrefixSum(int arr[], int n, int start, int end) {
    // Complexity -> O(n)
    //prefix sum array
    for (int i = 1; i < n; i++) {
        arr[i] = arr[i]+arr[i-1];
    } // at this point the prefix array is obtained.
}

int rangeSum (int arr[], int n, int start, int end) {
    //complexity -> O(1)
    // calculate sum bw the given range
    // we already have the sum of prefixArray in the last indx
    // subtract arr[start - 1] from arr[n-1]
    int range_Sum = arr[end] - arr[start-1];
    return range_Sum;
}

int main() {
    int arr[] = {6, 3, -2, 4, -1, 0, -5};
    int n = sizeof(arr)/sizeof(arr[0]);
    int start, end;
    cout << "start index: ";
    cin >> start;
    cout << "end index: ";
    cin >> end;
    PrefixSum(arr, n, start, end);
    int ans = rangeSum(arr, n, start, end);
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }cout << endl;
    cout << "Range Sum is: " << ans << endl;
}