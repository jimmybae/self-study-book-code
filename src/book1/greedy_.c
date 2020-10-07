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

int main () {
	int i, money;
	scanf("%d", &money);
	int change[5] = {500, 250, 100, 50, 10};
	int count[5] = {0, };
	
	int size = sizeof(change) / sizeof(int);
	
	for(i = 0; i < size; i++) {
		while(money >= change[i]) {
			money -= change[i];
			count[i]++;
		}
	}
	
	printf_array(count, size, "count");
}