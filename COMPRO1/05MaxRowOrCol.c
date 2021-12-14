#include<stdio.h>

void main()
{
    int x;
    int max=0;
    scanf("%d",&x);
    int ar[x][x];
    for(int r=0;r<x;r++){
        for(int c=0;c<x;c++){
            scanf("%d",&ar[r][c]);
        }
    }
    int sum,row,rc;
    for(int r=0;r<x;r++){
        sum=0;
        for(int c=0;c<x;c++){
            sum+=ar[r][c];
        }
        if(sum>max){
            max=sum;
            row=r+1;
            rc=1;
        }
    }
    int col;
    for(int c=0;c<x;c++){
        sum=0;
        for(int r=0;r<x;r++){
            sum+=ar[r][c];
        }
        if(sum>max){
            max=sum;
            col=c+1;
            rc=0;
        }
    }
    printf("max %d ",max);
    if(rc==1){
        printf("row %d",row);
    }
    else{
        printf("col %d",col);
    }

}
