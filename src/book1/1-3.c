#include <stdio.h>

void pra(int arr[], int size, char *subject) {
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

int main() {
	int i, j;
	int arr[] = {-7, -3, -2, 5, 8};
	int n = sizeof(arr) / sizeof(int);
	int sum;
	
	int ret = 0;
	// printf("%d\n", 1 << (n));
	for(i = 1; i < ( 1 << (n)); i++) {
		sum = 0;
		int str[5] = { 0, };
		for(j = 0; j < n; j++) {
			printf("%d & (1 << %d), %d = %d\n", i, j, 1 << j, i & (1 << j));
			if(i & (1 << j)) {
				sum += arr[j];
				str[j] = arr[j];
			}
		}
		// printf("~~~\n");
		// printf("%d", i);
		//  pra(str, 5, "");
		if (sum == 0) {
			ret = 1;
			// break;
		}
	}
	printf("%s\n", ret ? "True": "False");
}