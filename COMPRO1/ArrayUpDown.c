#include<stdio.h>
void main()
{
    int x;
    scanf("%d",&x);
    int a[x][x];
    for(int r=0;r<x;r++){
        for(int c=0;c<x;c++){
            scanf("%d",&a[r][c]);
        }
    }
    int sum=0;
    for(int r=0;r<x-1;r++){
        for(int c=r+1;c<x;c++){
            sum+=a[r][c];
        }
    }
    printf("%d\n",sum);
    sum=0;
    for(int r=1;r<k;r++){
        for(int c=0;c<r;c++){
            sum+=a[r][c];
        }
    }
    printf("%d",sum);
}
