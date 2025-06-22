#include <bits/stdc++.h>
using namespace std;

string stringreverse(string str, int n)
{
    if (n == 0)
//     string(count, character) creates a string of count copies of the character.

// So string(1, str[0]) creates a string of 1 character, which is just str[0].
        return string(1, str[0]);
        return string(1, str[n] )+( stringreverse(str, n - 1));
    
}

int main()
{
    string str;
    cout << "enter the string";
    cin >> str;
    int n = str.length()-1;
    string reverse = stringreverse(str, n);
    cout<<reverse<<endl;
    return 0;
}