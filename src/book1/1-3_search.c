#include <stdio.h>

void pra(int *arr, int size, char *subject) {
	int i;
	printf("%s: ", subject);
	for(i = 0; i < size; i++) {
		if(i != 0) {
			printf(", ");
		}
		printf("%d", arr[i]);
	}
	printf("\n");
}

int* bubbleSort(int *arr, int num) {
	int i, j, temp;
	for(i = 0; i < num - 1; i++) {
		for(j = 0; j < num - 1 - i; j++) {
			if(arr[j] > arr[j + 1]) {
				temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
			}
		}
	}
	return arr;
}

int seqSearch(int *arr, int num, int key) {
	int i;
	for(i = 0; i < num; i++) {
		if(arr[i] == key) {
			return i;
		}
	}
	return -1;
}

int binarySearch(int *arr, int num, int key) {
	int down, mid, up;
	down = 0;
	up = num - 1;
	for(;;) {
		mid = (down + up) / 2;
		
		if(arr[mid] == key) {
			return mid;
		}
		if(arr[mid] > key) {
			up = mid - 1;
		} else {
			down = mid + 1;
		}
	}
}

int main() {
	int arr1[5] = { 1, 2, 3, 4, 5};
	int ret = seqSearch(arr1, 5, 7);
	printf("%d\n", ret);
	
	int arr2[5] = { 4, 3, 2, 1, 5};
	pra(bubbleSort(arr2, 5), 5, "bubble sort result");
	
	// int arr3[5] = bubbleSort(arr2, 5);
	printf("binarySearch index: %d\n", binarySearch(bubbleSort(arr2, 5), 5, 4));
}