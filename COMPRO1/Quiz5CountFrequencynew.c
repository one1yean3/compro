#include<stdio.h>
void main()
{
    int x,y;
    scanf("%d",&x);
    int a[x][2];
    int size=0;
    for(int i=0;i<x;i++){
        int numc=0;
        scanf("%d",&y);
        for(int r=0;r<size;r++){
            if(y==a[r][0]){
                a[r][1]++;
                numc++;
            }
        }
        if(numc==0){
            a[size][0]=y;
            a[size][1]=1;
            size++;
        }
    }
    printf("%d\n",size);
    for(int i=0;i<size;i++){
        printf("%d %d\n",a[i][0],a[i][1]);
    }
}
