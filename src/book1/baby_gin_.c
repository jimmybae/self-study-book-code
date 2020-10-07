#include <stdio.h>
#include <stdbool.h>

void pra(int arr[], int size, char *subject) {
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
	int i, input;
	int o[12] = { 0, };
	int tri = 0;
	int run = 0;
	
	int card[10] = { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9 };
	
	scanf("%d", &input);
	for(i = 0; i < 6; i++) {
		o[(input % 10)]++;
		input /= 10;
	}
	
	pra(card, 10, "card\t");
	pra(o, 10, "o\t");
	
	for(i = 0; i < 10; i++) {
		printf("> o[%d]: %d, --- %s\n",
			   i, o[i], (o[i] >= 3) ? "true" : "false");
		if(o[i] >= 3) {
			o[i] -= 3;
			tri += 1;
			i--;
		}
		printf("> o[%d] - o[%d] - o[%d] :%d - %d - %d --- %s\n", i, i + 1, i + 2,
			   o[i], o[i + 1], o[i + 2],
			   ((o[i] >= 1) && (o[i + 1] >= 1) && (o[i + 2] >= 1)) ? "true": "false");
		
		if((o[i] >= 1) && (o[i + 1] >= 1) && (o[i + 2] >= 1)) {
			o[i] -= 1;
			o[i + 1] -= 1;
			o[i + 2] -= 1;
			
			run += 1;
			i--;
		}
	}
	printf("# triplet: %d\n", tri);
	printf("# run:     %d\n", run);
	if(tri + run == 2) {
		printf("Baby Gin\n");
	} else {
		printf("Lose\n");
	}
}