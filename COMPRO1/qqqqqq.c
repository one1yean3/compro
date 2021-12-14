#include<stdio.h>
void main()
{
    int x,y;
    scanf("%d  %d",&x,&y);
    int i=x;
    int N=y;
    while(i<=N){
        printf("%d ",i);
        i=i+1;
    }
    if(x>y){
        printf("Invalid input");
    }
}
