#include<bits/stdc++.h>
using namespace std;
int gcd(int a,int b){
    if(b==0){
        return a;
    }
    return gcd(b ,a%b);
}
int main(){
    int n,m;
    cout<<"enter a no";
    cin>>n;
        cout<<"enter a 2nd no";
    cin>>m;
    // int a;
    // if (n>m){
    //    a=n;
    // }
    // int b=n;
    int gc=gcd(n,m);
    cout<<gc<<endl;

}