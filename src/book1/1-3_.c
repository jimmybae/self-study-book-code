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
	
	for(i = 0; i < (1 << n); i++) {
		int ret[5] = {0, };
		for(j = 0; j < n; j++) {
			if(i & (1 << j)) {
				ret[j] = arr[j];
			}
		}
		printf("%d", i);
		pra(ret, 5, "");
	}
}