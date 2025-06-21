#include <bits/stdc++.h>
using namespace std;
bool ispalindrom(string str, int left, int right)
{
    
    if(left>=right){
        return true;
    }
    if(str[left]!=str[right]){
        return false;
    }
    return ispalindrom(str,left+1,right-1);
}
int main()
{
    string str;
    int left, right, n;
    cout << "enter the string";
    cin >> str;
    n = str.size();
    left = n - n;
    right = n-1;
    bool result=ispalindrom(str, left, right);
    if(result)
    cout<<"true, its palindrom";
    else
    cout<<"false,its not palindrom";
    return 0;
}