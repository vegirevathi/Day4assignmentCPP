#include <iostream>
using namespace std;

void display(int *, int);

void bubbleSort(int *arr, int n) {
	int i, j, temp, pass = 0;
	for (i = 0; i < n; i++) {
		for (j = i+1; j < n; j++) {
			if (arr[i] > arr[j]) {
				temp = arr[i];
				arr[i] = arr[j];
				arr[j] = temp;
			}
		}
	}
}

void display(int *arr, int n) {
	for (int i = 0; i < n; i++)
		cout << arr[i] << " ";
	cout << endl;
}

bool binarysearch(int arr[], int l, int r, int x) {
	if (r >= l) {
		int mid = l + (r - 1) / 2;
		if (arr[mid] == x)
			return true;
		else if (x < arr[mid])
			return binarysearch(arr, l, mid - 1, x);
		else
			return binarysearch(arr, mid+1, r, x);
	}
	return false;
}

int main() {
	int n, x;
	cout << "Enter number of elements to be sorted : " << endl;
	cin >> n;
	int arr[n];
	cout << "Enter elements : " << endl;
	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}
	cout << "Array before sorting :" << endl;
	display(arr, n);
	bubbleSort(arr, n);
	cout << "Array after sorting : " << endl;
	display(arr, n);
	cout << "Enter the element you want to search : " << endl;
	cin >> x;
	bool result = binarysearch(arr, 0, n-1, x);
	(result == true) ? cout << "Element is present" : cout << "Element is absent";

	return 0;
}

