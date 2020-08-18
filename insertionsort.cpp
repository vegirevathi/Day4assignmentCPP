#include <iostream>
using namespace std;

//In insertion sort, each element is compared with all its previous elements

void display(int *arr, int n) {
	for(int i = 0; i < n; i++)
		cout << arr[i] << " ";
	cout << endl;
}

void insertionsort(int *arr, int n) {
	int temp, pass = 0;
	for(int k = 1; k < n; k++) {
		temp = arr[k];
		int j = k - 1;
		while(j >= 0 && temp <= arr[j]) {
			arr[j+1] = arr[j];
			j = j - 1;
		}
		arr[j+1] = temp;
		pass++;
		cout << "elements after pass" <<pass <<endl;
		display(arr, n);
	}
	cout << "Number of passes : " << pass <<endl;
}

int main() {
	int n;
	cout << "enter number of elements in array : " <<endl;
	cin >> n;
	int arr[n];
	cout << "Enter elements : " << endl;
	for(int i = 0; i < n; i++) {
		cin >> arr[i];
	}
	cout << "Array before sorting : ";
	display(arr, n);
	insertionsort(arr, n);
	cout << "Array after sorting : ";
	display(arr, n);
}
