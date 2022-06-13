#include <stdio.h>

int main()
{
    int i;
    int j;
    int N;
    printf("Please give N:");
    scanf ("%d" ,&N);

    for (i=1; i<=N; i++)
        {
            for (j=i; j<N; j++)
            {
             printf (" ");
            }
            for (j=2; j<=i; j++)
            {
             printf("/");
            }
             printf("A");
             for (j=2; j<=i; j++)
            {
             printf("\\");
            }
             printf("\n");
        }

    for(i=N; i>=1; i--)
        {
            for(j=i; j<N; j++)
            {
                printf(" ");
            }
            for (j=2; j<=i; j++)
            {
                printf("\\");
            }
                printf("V");
                for (j=2; j<=i; j++)
            {
                printf("/");
            }
                printf("\n");
        }
        return 0;
}
