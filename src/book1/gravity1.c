#include <stdio.h>
#define EMPTY 0
#define BOX 1

int main()
{
    int i, j, k;
    int testCase;
    int T;
    int room[100][100];
    int roomWidth, roomHeight;
    int boxHeight;
    int maxFallen;
    int countEmptySpace;

	scanf("%d", &testCase);
	
    for(T = 0; T < testCase; T++)
    {
        scanf("%d%d", &roomWidth, &roomHeight);
		maxFallen = 0;
		
		//초기화
        for(i = 0; i < roomWidth; i++)
        {
            for(j = 0; j < roomHeight; j++)
            {
                room[i][j] = EMPTY;
            }
        }
		
		//방에 상자들을 채운다.
        for(i = 0; i < roomWidth; i++)
        {
            scanf("%d", &boxHeight);
            for(j = 0; j < boxHeight; j++)
            {
                room[i][j] = BOX;
            }
        }
		
		//각상자의 낙차를 구한다.
        for(i = 0; i < roomWidth; i++)
        {
            for(j = 0; j < roomHeight; j++)
            {
				//room[i][j]가 박스일때 빈칸의 개수를 셈으로서 낙차를 구한다.
                if(room[i][j] == BOX)
                {
                    countEmptySpace = 0;
                    for(k = i + 1; k < roomWidth; k++)
                    {
                        if(room[k][j] == EMPTY)
							countEmptySpace += 1;
                    }
					//이전에 구한 낙차보다 현재 낙차가 크다면 업데이트 한다.
                    if(countEmptySpace > maxFallen)
						maxFallen = countEmptySpace;
                }
            }
        }
        printf("# %d\n", maxFallen);
    }
}
