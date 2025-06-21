#include <bits/stdc++.h>
using namespace std;
// void sumofdigits(int n ,int &sum){
//     // int sum=0;
//     if(n==0) {return;}
//     int rem=n%10;
//     sum=sum+rem;
//     n=n/10;
//     sumofdigits(n,sum);
//     // cout<< sum;

// }
// int main(){
//     int n;
//     int sum=0;
//     cout<<"enter the number";
//     cin>>n;

//     sumofdigits(n, sum);
//     cout<<sum;
//     return 0;
// }
int sumofdigits(int n)
{
    if (n == 0)
        return 0;
    return (n % 10) + sumofdigits(n / 10);
}
int main()
{
    int n;
    cout << "emnter the number";
    cin >> n;
    // sumofdigits(n);
    cout << sumofdigits(n);
    return 0;
}