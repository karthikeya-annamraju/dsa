#include<iostream>
using namespace std;

int linearSearch(int arr[], int size, int key) {
    for (int i = 0; i < size; i++ ) {
        if (arr[i] == key) {
            return i;
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

    int res = linearSearch(arr, n, key);
    if (res == -1) {
        cout << "element not found" << endl;
    }
    else {
        cout << "element found at index " << res << endl; 
    }
}