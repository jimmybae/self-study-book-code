#include <stdio.h>

void printf_array(int arr[], int size, char *subject) {
	int i;
	printf("%s: ", subject);
	for(i = 0; i < size; i++) {
		if(i != 0) {
			printf(" - ");
		}
		printf("%d", arr[i]);
	}
	printf("\n");
}

int main() {
	int data[8] = {0, 4, 1, 3, 1, 2, 4, 1};
	int counts[5] = {0, };
	
	int i, maxValue;
	int size = sizeof(data) / sizeof(int);
	int temp[8] = {0, };
	
	printf_array(data, size, "data");
	
	for(i = 0; i < size; i++) {
		if(maxValue < data[i]) {
			maxValue = data[i];
		}
		counts[data[i]]++;
	}
	printf_array(counts, 5, "counts"); 
	
	for(i = 1; i < maxValue; i++) {
		counts[i] = counts[i - 1] + counts[i];
	}
	printf_array(counts, 5, "counts +"); 
	
	for(i = 0; i < size; i++) {
		temp[--counts[data[i]]] = data[i];
	}
	printf_array(temp, size, "temp");
}