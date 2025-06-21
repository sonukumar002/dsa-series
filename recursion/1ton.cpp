#include <bits/stdc++.h>
using namespace std;
void printnumber(int i, int a)
{
    if (i > a)
        return;
    cout << i<< " ";
    printnumber(i + 1, a);
}

int main()
{
    int n;
    cout << "enter the value of n";
    cin >> n;
    printnumber(1, n);
    return 0;
}