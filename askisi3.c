#define MAXN 100
#include <stdio.h>

int main()
{
    int N, i, ROW, COLUMN, next_row, next_column;
    scanf("%d",&N);
    int array[99][99];
    int start=(N/2);
    int max=N*N;
    array[0][start]=1;
    for (i=2,ROW=0,COLUMN=start; i<max+1; i++)
    {
        if ((ROW-1)<0)
        {
        next_row=N-1;
        }else{
        next_row=ROW-1;
        }
        printf("ROW %d\n", ROW);
        if ((COLUMN+1)>(N-1))
        {
        next_column=0;
        }else{
        next_column=COLUMN+1;
        }
        printf("COLUMN %d\n", COLUMN);

        if (array[next_row][next_column] > 0)
        {
            if (ROW>(N-1))
            {
            next_row=0;
            }else{
            next_row=ROW+1;
            next_column=COLUMN;
            }
        }
        ROW=next_row;
        COLUMN=next_column;
        printf("ROW %d\n", ROW);
        printf("COLUMN %d\n", COLUMN);
        array[ROW][COLUMN]=i;
    }
    int j;
    for (i=0; i<N; i++)
    {
        for (j=0; j<N; j++)
        {
        printf("%4d", array[i][j]);
        }
        printf("\n");
    }
    return 0;
}

