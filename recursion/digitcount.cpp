#include<bits/stdc++.h>
using namespace std;
int digitcount(int n ,int count){
    if(n<=0)
    return count;{
    n=n/10;
    return digitcount(n,count+1);
    }
    // return 0;
}

int main(){
    int n;
    cout<<"enter the no";
    cin>>n;
    int count=0;
    int digitcnt=digitcount(n,count);
    cout<<digitcnt<<endl;
    return 0;

}