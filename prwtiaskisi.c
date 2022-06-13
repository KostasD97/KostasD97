#include <stdio.h>

int main(){
    int N;
    scanf ("%d" ,&N);
    int i;
    int j;
    int line_size = 1;
    for (i = 0; i < N; i++){
            for(j = 0; j < line_size; j++){
            printf ("*");
        }
        printf("\n");
        line_size = line_size + 1;
    }
        return 0;
}
