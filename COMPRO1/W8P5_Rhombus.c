#include <stdio.h>
void main()
{
    int N;
    scanf("%d",&N);
    int tag=N/2,star=1;
    //up
    for(int n=0;n<(N/2)+1;n++){
        for(int c=0;c<tag;c++){
            printf(" ");
        }
        for(int c=0;c<star;c++){
            printf("*");
        }
        star+=2;
        tag--;
        printf("\n");
    }
    //down
    int tagd=1,stard=N-2;
    for(int n=0;n<N/2;n++){
        for(int c=0;c<tagd;c++){
            printf(" ");
        }
        for(int c=0;c<stard;c++){
            printf("*");
        }
        stard-=2;
        tagd++;
        printf("\n");
    }
}
