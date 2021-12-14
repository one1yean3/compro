#include<stdio.h>
void main()
{
    int x,y;
    scanf("%d",&x);
    int inp[x];
    for(int i=0;i<x;i++){
        scanf("%d",&inp[i]);
    }
    scanf("%d",&y);
    if(y>0){
        for(int i=0;i<x;i++){
            printf("%d ",inp[i]+y);
        }
    }
    else{
        for(int i=x-1;i>=0;i--){
            printf("%d ",inp[i]+y);
        }
    }
}
