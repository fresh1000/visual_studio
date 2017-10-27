#include<iostream>
using namespace std;

const int SIZE = 10;

int parent(int i) {
	return i / 2;
}

int left(int i) {
	return 2 * i;
}

int right(int i) {
	return 2 * i + 1;
}

void heapify(int* arr, int i, int heap_size) {
	int largest;
	int l = left(i);
	int r = right(i);
	
	if (l <= heap_size && arr[l] > arr[i]){
		largest = l;
	}else {
		largest = i;
	}

	if (r <= heap_size && arr[r] > arr[largest]) {
		largest = r;
	}

	if (largest != i) {
		int temp = arr[largest];
		arr[largest] = arr[i];
		arr[i] = temp;
		heapify(arr, largest, heap_size);
	}
}

void build_heap(int *arr,int heap_size) {
	for (int i = heap_size / 2; i >= 0; i--) {
		heapify(arr, i, heap_size);
	}
}

void heapSort(int *a) {
	build_heap(a, SIZE);
	int heap_size = SIZE - 1;
	for (int i = heap_size; i >= 0; i--) {
		int tmp = a[0];
		a[0] = a[i];
		a[i] = tmp;
		heap_size--;
		heapify(a, 0, heap_size);
	}
}

int main() {
	int *a = new int[SIZE];
	a[0] = 77;
	a[1] = 81;
	a[2] = 18;
	a[3] = 30;
	a[4] = 4;
	a[5] = 10;
	a[6] = 19;
	a[7] = 2;
	a[8] = 47;
	a[9] = 3;

	heapSort(a);

	//build_heap(a, SIZE);

	for (int i = 0; i < SIZE; i++) {
		printf("%i\n", a[i]);
	}
	system("pause");
	return 0;
}