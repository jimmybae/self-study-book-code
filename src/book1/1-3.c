#include <stdio.h>
#include <stdbool.h>

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

int main () {
	int i, j, k, l, m, r;
	int number[] = { -7, -3, -2, 5, 8 };
	for(i = 0; i < 5; i++) {
		printf("> %d\n", number[i]);
		if(number[i] == 0) {
			printf("OK ------> %d\n", number[i]);
		}
		r++;
		for(j = i + 1; j < 5; j++) {
			printf("> %d, %d\n", number[i], number[j]);
			if(number[i] + number[j] == 0) {
				printf("OK ------> %d, %d\n", number[i], number[j]);
			}
			r++;
			for(k = j + 1; k < 5; k++) {
				printf("> %d, %d, %d\n", number[i], number[j], number[k]);
				if(number[i] + number[j] + number[k] == 0) {
					printf("OK ------> %d, %d, %d\n", number[i], number[j], number[k]);
				}
				r++;
				for(l = k + 1; l < 5; l++) {
					printf("> %d, %d, %d, %d\n", number[i], number[j], number[k], number[l]);
					if(number[i] + number[j] + number[k] + number[l] == 0) {
						printf("OK ------> %d, %d, %d, %d\n", number[i], number[j], number[k], number[l]);
					}
					r++;
				}
			}
		}
	}
	printf("> %d, %d, %d, %d, %d\n", number[0], number[1], number[2], number[3], number[4]);
	r++;
	if(number[0] + number[1] + number[2] + number[3] + number[4] == 0) {
		printf("OK ------> %d, %d, %d, %d, %d\n", number[0], number[1], number[2], number[3], number[4]);
	}
	pra(number, 5, "number");
	printf("%d\n", r);
}