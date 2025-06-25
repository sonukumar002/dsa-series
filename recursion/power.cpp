#include<bits/stdc++.h>
using namespace std;
int power(int n,int m,int p){
if(p==m){
    return 1;
}
// n=n*n;
// p=p+1;
return n*power(n,m,p+1);
}
int main(){
    int n,m;
    cout<<"enter the number";
    cin>>n;
    cout<<"enter the power";
    cin>>m;
    int c=0;
    int product=power(n,m,c);
    cout<<product<<endl;
}