#include <iostream>
using namespace std;

//in merge sort, array is divided into two equal halves and further divided equally

void display(int *arr, int n) {
	for(int i = 0; i < n; i++)
		cout << arr[i] <<" ";
	cout <<endl;
}

void merge(int *arr, int low, int high, int mid) {
	int i, j, k, c[50];
	i = low;
	k = low;
	j = mid + 1;
	while (i <= mid && j <= high) {
		if (arr[i] < arr[j]) {
			c[k] = arr[i];
			k++;
			i++;
		}
		else {
			c[k] = arr[j];
			k++;
			j++;
		}
	}
	while (i <= mid) {
		c[k] = arr[i];
		k++;
		i++;
	}
	while (j <= high) {
		c[k] = arr[j];
		k++;
		j++;
	}
	for(i = low; i < k; i++) {
		arr[i] = c[i];
	}
}

void mergesort(int *arr, int low, int high) {
	int mid;
	if (low < high) {
		mid = (low + high) /2;
		mergesort(arr, low, mid);
		mergesort(arr, mid+1, high);
		merge(arr, low, high, mid);
	}
}

int main() {
	int n;
	cout << "Enter number of elements : " << endl;
	cin >> n;
	int arr[n];
	cout << "Enter array elements : " << endl;
	for(int i = 0; i < n; i++) {
		cin >> arr[i];
	}
	cout << "Array before sorting : " << endl;
	display(arr, n);
	mergesort(arr, 0, n-1);
	cout << "Array after sorting : " << endl;
	display(arr, n);
	return 0;
}
