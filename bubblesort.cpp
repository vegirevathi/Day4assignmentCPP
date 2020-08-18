#include <iostream>
using namespace std;

//In bubble sorting each of the elements in the list is compared to its adjacent element
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
		pass++;
		cout << "elements after pass " << pass <<endl;
		display(arr, n);
	}
	cout << "number of passes it went through : " << pass << endl;
}

void display(int *arr, int n) {
	for (int i = 0; i < n; i++)
		cout << arr[i] << " ";
	cout << endl;
}

int main() {
	int n;
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
}

