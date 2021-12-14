#include<stdio.h>
void main()
{
    int R,C,n=1,N,x,y;
    scanf("%d %d",&R,&C);
    int array[R+1][C+1];
    for(int i=1;i<=R;i++){
        for(int c=1;c<=C;c++){
            array[i][c]=0;
        }
    }
    scanf("%d",&N);
    for(int i=0;i<N;i++){
        scanf("%d %d",&x,&y);
        array[x][y]=n;
        n++;
    }
    for(int i=1;i<=R;i++){
        for(int c=1;c<=C;c++){
            printf("%d ",array[i][c]);
        }
        printf("\n");
    }
}
