#include <iostream>
using namespace std;

int main() {
	int num, rev, temp, sum = 0;
	cout << "Enter a number : " <<endl;
	cin >> num;
	temp = num;
	while (num > 0) {
		rev = num % 10;
		sum = (sum * 10) + rev;
		num = num / 10;
	}
	if (temp == sum)
		cout << "Number is palindrome" <<endl;
	else
		cout << "Number is not palindrome" <<endl;
	return 0;
}
