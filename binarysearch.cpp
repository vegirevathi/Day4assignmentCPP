#include <iostream>
using namespace std;

bool binarysearch(int arr[], int l, int r, int x) {
	if (r >= l) {
		int mid = l + (r - 1) / 2;
		if (arr[mid] == x)
			return true;
		else if (x < arr[mid])
			return binarysearch(arr, l, mid - 1, x);
		else
			return binarysearch(arr, mid + 1, r, x);
	}
	return false;
}

int main() {
	int n, x;
	int arr[] = {1, 2, 5, 8, 25, 75, 98, 100};
	n = sizeof(arr) / sizeof(arr[0]);
	cout << "Enter the element you want to search : " << endl;
	cin >> x;
	bool result = binarysearch(arr, 0, n-1, x);
	(result == false) ? cout << "Element is not present" : cout << "Element is present";

	return 0;
}

