#include <bits/stdc++.h>
using namespace std;
void decimal(int n)
{
    if (n == 0)
    {
        return;
    }
    decimal(n / 2);
    cout << (n % 2);
}

int main()
{
    int n;
    cout << "enter the no";
    cin >> n;
    // if (n == 0)
    // {
    //     cout << "0";
    // }
    // else
        decimal(n);
    return 0;
}