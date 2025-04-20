#include<bits/stdc++.h>
#include<iostream>
#include<vector>
using namespace std;
int findMin(vector<int> &arr) {
    // Write your code here.
    int n = arr.size();
    int ans = INT_MAX;
    int low = 0;
    int high = n - 1;
    while(low <= high) {
      int mid = (low + high) / 2;
      if (arr[mid] >= arr[low]) {
        ans = min(ans, arr[low]);
        low = mid + 1;
      }
      else
      //  (arr[mid] <= arr[high])
       {
          ans=min(ans,arr[mid]);
          high=mid-1;
      }
    }
    return ans;
  }
  int main() {
    int n;
    cout << "Enter the number of elements: ";
    cin >> n;

    vector<int> arr(n);
    cout << "Enter " << n << " elements of the rotated sorted array:\n";
    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
    }

    int minimum = findMin(arr);
    cout << "The minimum element in the rotated sorted array is: " << minimum << endl;

    return 0;
}