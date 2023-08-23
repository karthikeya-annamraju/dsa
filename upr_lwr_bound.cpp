// Implementing upperbound and lowerbound in binary search

#include<iostream>
using namespace std;

int upperBound(int arr[], int size, int k) {
    int low = 0;
    int high = size - 1;
    while (low < high) {
        int mid = (low + high)/2;
        if (arr[mid] >= k) {
            high = mid;
        }
        else {
            low = mid + 1;
        }
    }
    return low;
}

int lowerBound(int arr[], int size, int k) {
    int low = 0;
    int high = size - 1;
    while (low < high) {
        int mid = (low + high)/2;
        if (arr[mid] <= k) {
            low = mid + 1;
        }
        else {
            high = mid;
        }
    }
    return low;
}

int main() {
    int arr[] ={1, 1, 2, 3, 3, 3, 3, 7};
    int k = 3;
    //cin >> k;
    int lb = upperBound(arr, 8, k);
    int ub = lowerBound(arr, 8, k);
    cout << "lower bound is " << lb << endl;
    cout << "upper bound is " << ub << endl;
}