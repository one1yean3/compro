#include<stdio.h>
void main()
{
    int x;
    scanf("%d",&x);
    x=x%100;
    x=x/10;
    printf("%d",x);
}
