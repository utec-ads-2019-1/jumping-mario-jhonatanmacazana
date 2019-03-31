#include <stdio.h>

int main()
{
    int lowJumps, highJumps, testCases;
    int N, walls[100];

    scanf("%d", &testCases);
    for (int i = 1; i <= testCases; i++)
    {
        highJumps = 0;
        lowJumps = 0;
        scanf("%d", &N);

        for (int j = 0; j < N; j++)
        {
            scanf("%d", &walls[j]);
        }
        for (int k = 0; k < N-1 ; k++)
        {
            if (walls[k] < walls[k + 1])
                lowJumps++;
            if (walls[k] > walls[k + 1])
                highJumps++;
        }
        printf("Case %d: %d %d\n", i, lowJumps, highJumps);
    }

    return 0;
}
