#include<stdio.h>
void main()
{
    int n,x;
    scanf("%d",&n);
    int inp[n][10];
    for(int i=0;i<n;i++){
        for(int c=0;c<10;c++){
            inp[i][c]=0;
        }
    }
    for(int i=0;i<n;i++){
        scanf("%d",&x);
        inp[i][x]++;
    }
    for(int r=0;r<n;r++){
        for(int c=0;c<10;c++){
            printf("%d ",inp[r][c]);
        }
        printf("\n");
    }
}
