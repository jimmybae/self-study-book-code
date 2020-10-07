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
	printf_array(data, sizeof(data) / sizeof(int), "data");
	
	int counts[5] = {0, 0, 0, 0, 0};
	int i, j;
	for(i = 0; i < sizeof(counts) /  sizeof(int); i++) {		
		for(j = 0; j < sizeof(data) /  sizeof(int); j++) {
			if(i == data[j]) {
				counts[i]++;
			}
		}
	}
	printf_array(counts, sizeof(counts) / sizeof(int), "counts");
	
	for(i = 1; i < sizeof(counts) / sizeof(int); i++) {
		counts[i] = counts[i - 1] + counts[i];
	}
	printf_array(counts, sizeof(counts) / sizeof(int), "counts +");
	
	int temp[8] = {0, 0, 0, 0, 0, 0, 0, 0};
	for(j = sizeof(data) / sizeof(int) - 1; j > -1; j--) {
		//printf("%d\n", j);
		temp[--counts[data[j]]] = data[j];
		//printf_array(counts, sizeof(counts) / sizeof(int), "counts -");
	}
	printf_array(temp, sizeof(temp) / sizeof(int), "temp");
}

