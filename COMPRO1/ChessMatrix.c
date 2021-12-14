#include<stdio.h>
void main()
{
    int R,C,K;
    scanf("%d %d",&R,&C);
    int inp[R][C];
    for(int r=0;r<R;r++){
        for(int c=0;c<C;c++){
            scanf("%d",&inp[r][c]);
        }
    }
    scanf("%d",&K);
    for(int r=0;r<R;r++){
        for(int c=0;c<C;c++){
            if(r%2==1&&c%2==0||r%2==0&&c%2==1){
                inp[r][c]+=K;
            }
        }
    }
    for(int r=0;r<R;r++){
        for(int c=0;c<C;c++){
            printf("%d ",inp[r][c]);
        }
        printf("\n");
    }
}
