#include <stdio.h>

int main() {
	int bubble[5] = { 55, 7, 78, 12, 42 };
	int loop, i, temp;
	
	printf("%d - %d - %d - %d - %d\n", bubble[0], bubble[1], bubble[2], bubble[3], bubble[4]);
	for(loop = 0; loop < sizeof(bubble) / sizeof(int) - 1; loop++) {
		for(i = 0; i < sizeof(bubble) / sizeof(int) - 1 - loop; i++) {
			if(bubble[i] > bubble[i + 1]) {
				temp = bubble[i];
				bubble[i] = bubble[i + 1];
				bubble[i + 1] = temp;
			}
		}
	}
	printf("%d - %d - %d - %d - %d\n", bubble[0], bubble[1], bubble[2], bubble[3], bubble[4]);
}