#include <stdio.h>

int main() {
	int origin[5] = {55, 7, 78, 12, 42};
	int loop, i, hold;
	
	printf("%lu %lu\n", sizeof(origin), sizeof(int));
	printf("%d - %d - %d - %d - %d\n", origin[0], origin[1], origin[2], origin[3], origin[4]);
	for(loop = 0; loop < sizeof(origin) / sizeof(int) - 1; loop++) {
		
		for(i = 0; i < sizeof(origin) / sizeof(int) - 1 - loop; i++) {
			printf("%d: %d > %d\n", i, origin[i], origin[i + 1]);
			if(origin[i] > origin[i + 1]) {
				hold = origin[i];
				origin[i] = origin[i + 1];
				origin[i + 1] = hold;
			}
		}
		printf("---\n");
	}
	
	printf("%d - %d - %d - %d - %d\n", origin[0], origin[1], origin[2], origin[3], origin[4]);
}