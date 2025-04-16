// problem statemnt
// (https://www.naukri.com/code360/problems/quick-sort_983625)

#include <bits/stdc++.h>
using namespace std;

int partionindex(vector<int> &arr, int low, int high)
{
    int pivotpoint = arr[low];
    int i = low;
    int j = high;
    while (i < j)
    {
        while (arr[i] <= pivotpoint && i <= high - 1)
        {
            i++;
        }
        while (arr[j] > pivotpoint && j >= low + 1)
        {
            j--;
        }
        if (i < j)
        {
            swap(arr[i], arr[j]);
        }
    }
    swap(arr[low], arr[j]);
    return j;
};
void qs(vector<int> &arr, int low, int high)
{
    if (low < high)
    {
        int pindex = partionindex(arr, low, high);
        qs(arr, low, pindex - 1);
        qs(arr, pindex + 1, high);
    }
}
vector<int> quicksort(vector<int>arr){
    qs(arr,0,arr.size()-1);
    return arr;
}

int main(){}