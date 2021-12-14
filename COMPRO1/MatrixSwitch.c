#include<stdio.h>
void main()
{
    int N,D,half;
    //scan N
    scanf("%d",&N);
    int inp[N][N];
    //scan matrix
    for(int r=0;r<N;r++){
        for(int c=0;c<N;c++){
            scanf("%d",&inp[r][c]);
        }
    }
    //scan D
    scanf("%d",&D);
    half=N/2;
    //process
    //D==1 left to right 3 4 5 6 >> 5 6 3 4
                //       1 2 3 4 >> 3 4 1 2
    if(D==1){
        for(int r=0;r<N;r++){
            for(int c=half;c<N;c++){
                printf("%d ",inp[r][c]);
            }
            for(int c=0;c<half;c++){
                printf("%d ",inp[r][c]);
            }
            printf("\n");
        }
    }
    else if(D==2){
        for(int r=half;r<N;r++){
            for(int c=0;c<N;c++){
                printf("%d ",inp[r][c]);
            }
            printf("\n");
        }
        for(int r=0;r<half;r++){
            for(int c=0;c<N;c++){
                printf("%d ",inp[r][c]);
            }
            printf("\n");
        }
    }

}
