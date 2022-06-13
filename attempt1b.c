#include <stdio.h>

int main()
{
int N, x, y, count;
    scanf ("%d",&N);

    for(x=2; x<=N; x++)
    count=0;
    {
    for(y=2; y<=x/2; y++)
    {
    if(x%y==0){
        count=1;
        break;
        }
    }
    if (count==0 && N!=1)
     printf("%d\n",y);
    }
    getch();
    return 0;
}
