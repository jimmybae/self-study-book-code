#include <stdio.h>
#define EMPTY 0
#define BOX 1

int main() {
	int t, n, h;
	int testCase;
	int roomWidth;
	int roomHeight;
	int room[100][100] = { EMPTY, };
	int maxFallen;
	int emptyRoomSpace;
	int boxTop[100] = { EMPTY, };
		
	scanf("%d", &testCase);
	
	for(int t = 0; t < testCase; t++) {
		maxFallen = 0;
		scanf("%d%d", &roomWidth, &roomHeight);
		
		for(int n = 0; n < roomWidth; n++) {
			scanf("%d", &boxTop[n]);
			for(int h = 0; h < boxTop[n]; h++) {
				room[n][h] = BOX;
			}
		}
		
		for(int n = 0; n < roomWidth; n++) {
			if(boxTop[n] > 0) {
				emptyRoomSpace = 0;
				for(int h = n + 1; h < roomWidth; h++) {
					if(room[h][boxTop[n] - 1] == EMPTY) {
						emptyRoomSpace += 1;
					}
				}
				if(emptyRoomSpace > maxFallen) {
					maxFallen = emptyRoomSpace;
				}	
			}
		}
		printf("# %d\n", maxFallen);
	}
}