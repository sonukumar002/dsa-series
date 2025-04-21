#include<bits/stdc++.h>
using namespace std;
int findPeakElement(vector<int> &arr) {
    // Write your code here
    int n=arr.size();
    if(n==1){
        return 0;
    }
    if(arr[0]>arr[1]){
        return 0;
    }
    if(arr[n-1]>arr[n-2]){
        return n-1;
    }
    int low=1;
    int high=n-2;
    while(low<=high){
        int mid=(low+high)/2;
        if(arr[mid]>arr[mid-1] && arr[mid]>arr[mid+1]){
            return mid;
            // low=mid+1;
        }
        else if(arr[mid]>arr[mid-1]){
            low=mid+1;
        }
        else if(arr[mid]>arr[mid+1]){
            high=mid-1;
        }
        else{
            high=mid-1;
        }


    }
    return -1;
    }


    int main() {
        int n;
        cout << "Enter the number of elements in the array: ";
        cin >> n;
    
        vector<int> arr(n);
        cout << "Enter the elements of the array:\n";
        for (int i = 0; i < n; ++i) {
            cin >> arr[i];
        }
    
        int peakIndex = findPeakElement(arr);
        if (peakIndex != -1) {
            cout << "Peak element found at index " << peakIndex << " with value " << arr[peakIndex] << endl;
        } else {
            cout << "No peak element found." << endl;
        }
    
        return 0;
    }