#include <iostream>
using namespace std;

bool search(int arr[], int n) {
	int x;
	cout << "Enter a num u want to search : " <<endl;
	cin >> x;
	for(int i = 0; i < n; i++)
		if (arr[i] == x)
			return true;
	return false;
}

int main() {
	int n;
	int arr[] = {2, 3, 5, 7, 11, 13, 19};
	n = sizeof(arr) / sizeof(arr[0]);
	bool result = search(arr, n);
	(result == true)? cout << "Element is present" : cout << "Element is not present";

	return 0;
}
