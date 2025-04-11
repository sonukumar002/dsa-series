// https://www.naukri.com/code360/problems/maximum-points-from-cards_8391016
#include<iostream>
#include <vector>
using namespace std;
int maxPoints(vector<int>&arr , int K){
    int n=arr.size();
    // Write your code here.
    int lsum=0;
    int rsum=0;
    int maxmsum=0;
    for(int i=0;i<=K-1;i++){
        lsum=lsum+arr[i];  
    }
    maxmsum=lsum;
    int rindex=n-1;
    for(int i=K-1;i>=0;i--){
        lsum=lsum-arr[i];
        rsum=rsum+arr[rindex];
        rindex=rindex-1;
        maxmsum=max(maxmsum,lsum+rsum);
    }
    
    return maxmsum;
}

int main() {
    int n, K;
    cout << "Enter the size of array: ";
    cin >> n;

    vector<int> arr(n);
    cout << "Enter the elements of the array:\n";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    cout << "Enter the value of K: ";
    cin >> K;

    if (K > n) {
        cout << "K cannot be greater than the size of the array.\n";
        return 1;
    }

    int result = maxPoints(arr, K);
    cout << "Maximum points collected = " << result << endl;

    return 0;
}