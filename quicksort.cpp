#include <iostream>
using namespace std;

//in quicksort, pivot element divides the list into two sublists
//the elements lesser than the pivot are to the left
//the elements greater than the pivot are to the right

void display(int *arr, int n) {
	for(int i = 0; i < n; i++)
		cout << arr[i] << " ";
	cout << endl;
}

void swap(int* a, int* b) {
	int temp;
	temp = *a;
	*a = *b;
	*b = temp;
}

int partition(int arr[], int low, int high) {
	int pivot = arr[high];
	int i = (low - 1);
	for(int j = low; j <= high - 1; j++) {
		if (arr[j] <= pivot) {
			i++;
			swap(&arr[i], &arr[j]);
		}
	}
	swap(arr[i+1], arr[high]);
	cout << "Elements order : " << endl;
	return (i+1);
}

void quicksort(int arr[], int low, int high) {
	int pivot;
	if(low < high) {
		pivot = partition(arr, low, high);
		quicksort(arr, low, pivot-1);
		quicksort(arr, pivot+1, high);
	}
}

int main() {
	int n;
	cout << "Enter number of elements : " << endl;
	cin >> n;
	int arr[n];
	cout << "Enter elements of array : " << endl;
	for(int i = 0; i < n; i++) {
		cin >> arr[i];
	}
	cout << "Array before sorting : " << endl;
	display(arr, n);
	quicksort(arr, 0, n-1);
	cout << "Array after sorting : " << endl;
	display(arr, n);

	return 0;
}
