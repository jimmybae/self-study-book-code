#include <stdio.h>

void printf_array(int array[]) {
	int i;
	for(i = 0; i < sizeof(array) / sizeof(int); i++) {
		if(i != 0) {
			printf(" - ");
		}
		printf("%d", array[i]);
	}
	printf("\n");
}