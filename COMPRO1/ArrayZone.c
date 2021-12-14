#include<stdio.h>
void main()
{
    int x,y;
    scanf("%d %d",&x,&y);
    int ar[x][y];
    for(int r=0;r<x;r++){
        for(int c=0;c<y;c++){
            scanf("%d",&ar[r][c]);
        }
    }

    int sum=0;

    for(int r=0;r<x/2;r++){
        for(int c=0;c<y/2;c++){
            sum+=ar[r][c];
        }
    }
    printf("%d ",sum);
    sum=0;
    for(int r=0;r<x/2;r++){
        for(int c=y/2;c<y;c++){
            sum+=ar[r][c];
        }
    }
    printf("%d\n",sum);
    sum=0;
    for(int r=x/2;r<x;r++){
        for(int c=0;c<y/2;c++){
            sum+=ar[r][c];
        }
    }
    printf("%d ",sum);
    sum=0;
    for(int r=x/2;r<x;r++){
        for(int c=y/2;c<y;c++){
            sum+=ar[r][c];
        }
    }
    printf("%d",sum);

}
