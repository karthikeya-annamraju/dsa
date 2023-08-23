#include<iostream>
using namespace std;

// we need a sorted array to perform binary search.

int binarySearch(int arr[], int size, int key) {
    int low = 0;
    int high = size - 1;
    while (low <= high) {
        int mid = low + ((high - low)/2);
        if (arr[mid] == key) {
            return mid;
        }
        else if (arr[mid] > key) {
            high = mid - 1;
        }
        else {
            low = mid + 1;
        }
    }
    return -1;
}

int main() {
    int n;
    cin >> n;
    
    int arr[n];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int key;
    cin >> key;

    int res = binarySearch(arr, n, key);
    if (res == -1) {
        cout << "element not found" << endl;
    }
    else {
        cout << "element found at index " << res << endl; 
    }
}