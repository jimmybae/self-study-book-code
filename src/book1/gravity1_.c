#include <stdio.h>
#define EMPTY 0
#define BOX 1

int main() {
	int t, n, m, h;
	int testCase;
	int roomWidth;
	int roomHeight;
	int boxHeight;
	int room[100][100];
	int maxFallen;
	int emptyRoom;
		
	scanf("%d", &testCase);
	
	for(int t = 0; t < testCase; t++) {
		maxFallen = 0;
		scanf("%d%d", &roomWidth, &roomHeight);
		
		for(int n = 0; n < roomWidth; n++) {
			for(int m = 0; m < roomHeight; m++) {
				room[n][m] = EMPTY;
			}
		}
		
		for(int n = 0; n < roomWidth; n++) {
			scanf("%d", &boxHeight);
			for(int h = 0; h < boxHeight; h++) {
				room[n][h] = BOX;
			}
		}
		
		for(int n = 0; n < roomWidth; n++) {
			for(int m = 0; m < roomHeight; m++) {
				if(room[n][m] == BOX) {
					emptyRoom = 0;
					for(int h = n + 1; h < roomWidth; h++) {
						if(room[h][m] == EMPTY) {
							emptyRoom += 1;
						}
					}
					if(emptyRoom > maxFallen) {
						maxFallen = emptyRoom;
					}
				}
			}
		}
		printf("# %d\n", maxFallen);
	}
}