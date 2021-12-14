#include<stdio.h>
void main()
{
    int x;
    scanf("%d",&x);
    if(x<0){
        x=-x;
    }
    printf("%d",x);
}
