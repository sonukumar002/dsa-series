// problem statement(https://www.naukri.com/code360/problems/square-root-of-an-integer_1089689)
#include <bits/stdc++.h>
using namespace std;

int squareRoot(int a)
{
	int low = 1;
	int high = a;
	int ans = 0;

	while (low <= high) {
		int mid = (low + high) / 2;
		int val = mid * mid;

		if (val <= a) {
			ans = mid;
			low = mid + 1;
		}
		else {
			high = mid - 1;
		}
	}
	return ans;
}

int main() {
	int n;
	cout << "Enter a number: ";
	cin >> n;

	int result = squareRoot(n);
	cout << "Square root (floor value) of " << n << " is: " << result << endl;

	return 0;
}