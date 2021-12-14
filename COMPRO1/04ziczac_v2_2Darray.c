#include<stdio.h>
void main()
{
    int N;
    scanf("%d",&N);
    int a[N][N];
    for(int r=0;r<N;r++){
        for(int c=0;c<N;c++){
            scanf("%d",&a[r][c]);
        }
    }
    int d;
    scanf("%d",&d);
    //d1
    if(d==1){
        for(int c=0;c<N;c++){
            if(c%2==0){
                for(int r=0;r<N;r++){
                    printf("%d ",a[r][c]);
                }
                printf("\n");
            }
            else if(c%2==1){
                for(int r=N-1;r>=0;r--){
                    printf("%d ",a[r][c]);
                }
                printf("\n");
            }
        }
    }
    //d2
    if(d==2){
        for(int c=N-1;c>=0;c--){
            if(c%2==1){
                for(int r=0;r<N;r++){
                    printf("%d ",a[r][c]);
                }
                printf("\n");
            }
            else if(c%2==0){
                for(int r=N-1;r>=0;r--){
                    printf("%d ",a[r][c]);
                }
                printf("\n");
            }
        }
    }

    }

