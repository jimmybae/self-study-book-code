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
	int coins[] = { 500, 250, 100 ,50, 10 };
	int count[5] = { 0, };
	int money;
	int i = 0;
	
	scanf("%d", &money);
	
	while(money != 0) {
		if(money < 0) {
			count[i]--;
			money += coins[i++];
		} else {
			count[i]++;
			money -= coins[i];
		}
	}
	printf_array(count, 5, "count");
	
}