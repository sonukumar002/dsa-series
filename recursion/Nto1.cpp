#include<bits/stdc++.h>
using namespace std;

void printnumber(int n){
if(n<1){
    return;
}
cout<<n<<" ";
printnumber(n-1);
}

int main(){
    int n;
    cout<<"enter the value of n";
    cin>>n;
    printnumber(n);
}