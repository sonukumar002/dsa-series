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

// 	WAP to find out Sum of numbers in a given range
// #include<iostream>
// using namespace std;
// int main(){
//     int n,m;
//     cin>>n>>m;
//     int mini=min(n,m);
//     int maxm=max(n,m);
//     int sum=0;
//     for(int i=mini;i<=maxm;i++){
//         sum+=i;
//     }
//     cout<<sum;
// }

// 42.	WAP to identify an user given number is Perfect number or not
// #include <bits/stdc++.h>
// bool perfectNumber(int k) {
//   // Write your code here.
//   int num = k;
//   long long sum = 1;
//   for (int i = 2; i <=sqrt(k); i++) {
//     if (k % i == 0) {
//       sum +=i;
//       if (i != k / i) {
//         sum += k / i;
//       }
//     }
//   }
//   return(sum==num);
// }


// 46.	WAP to identify Abundant number or not
// An abundant number (or excessive number) is a positive integer that is smaller than the sum of its proper divisors (all divisors excluding the number itself). In other words, the sum of the proper divisors of an abundant number exceeds the number.
// Example:
// •	12 is an abundant number. Its divisors are 1, 2, 3, 4, and 6 (excluding 12 itself). The sum of these divisors is:
// 1+2+3+4+6=161 + 2 + 3 + 4 + 6 = 161+2+3+4+6=16
// Since 16 is greater than 12, 12 is an abundant number.
#include<iostream>
#include <math.h>
using namespace std;

int main()
{
    int x;
    cin >> x;
    int sum = 1;
    
    for (int i = 2; i < sqrt(x); i++)
    {
        if (x % i == 0)
        {
            sum += i;
            if (i != x / i)
            {
                sum += x / i;
            }
        }
    }
    if(sum>x){
        cout<<"yes";
    }
    else{
        cout<<"no";
    }
}






