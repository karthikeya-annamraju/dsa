// Implementing upperbound and lowerbound in binary search

#include<iostream>
using namespace std;

int upperBound(int arr[], int size, int k) {
    int low = 0;
    int high = size - 1;
    int ans;
    while (low < high) {
        int mid = (low + high)/2;
        if (arr[mid] == k) {
            ans = mid;
            low = mid + 1;
        }
        else if (arr[mid] < k) {
            low = mid + 1;
        }
        else {
            high = mid - 1;
        }
    }
    return ans;
}

int lowerBound(int arr[], int size, int k) {
    int low = 0;
    int high = size - 1;
    int ans;
    while (low <= high) {
        int mid = (low + high)/2;
        if (arr[mid] == k){
            ans = mid;
            high = mid - 1; 
        }
        else if (arr[mid] < k) {
            low = mid+1;
        }
        else {
            high = mid - 1;
        }
    }
    return ans;
}

int main() {
    int arr[] ={1, 1, 2, 3, 3, 3, 3, 7};
    int k = 3;
    //cin >> k;
    int lrb = lowerBound(arr, 8, k);
    int upb = upperBound(arr, 8, k);  
    cout << "lower bound is " << lrb << endl;
    cout << "upper bound is " << upb << endl;
}
