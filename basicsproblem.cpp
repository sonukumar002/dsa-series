// 1.	WAP to check A character is a vowel or consonant
// #include<iostream>
// using namespace std;
// int main()
// {
//     cout << "enter a character";
//     char ch;
//     cin >> ch;
//     if (ch == 97 || ch == 101 || ch == 105 || ch == 111 || ch == 117 || ch == 65 || ch == 69 || ch == 73 || ch == 79 || ch == 55)
//     {
//         cout << "vowel";
//     }
//         else
//         cout << "consonent";

// }

// 2 WAP to check A character is an alphabet or not
// #include <bits/stdc++.h> 
// int findCase(char ch) {
//     // Write your code here.
//     if(islower(ch)){
//         return 0;
//     }
//     if(isupper(ch)){
//         return 1;
//     }
//     else
//     return -1;
// }
// 16.	WAP to find out Reverse of a given number
// #include <iostream>
// #include <climits>
// using namespace std;
// int main()
// {
//     int n;
//     cin >> n;
//     int rev_num = 0;
//     int last_digit = 0;
//     while (n != 0)
//     {
//         last_digit = n % 10;
//          if (rev_num > (INT_MAX / 10) || rev_num < (INT_MIN / 10))
//         {
//             return 0;
//         }
//         rev_num = (rev_num * 10) + last_digit;
//         n = n / 10;
//     }
//     cout<<rev_num;
//     }

// 15.	WAP to find out Sum of numbers in a given range
#include<iostream>
using namespace std;
int main(){
    int n,m;
    cin>>n>>m;
    int mini=min(n,m);
    int maxm=max(n,m);
    int sum=0;
    for(int i=mini;i<=maxm;i++){
        sum+=i;
    }
    cout<<sum;
}


