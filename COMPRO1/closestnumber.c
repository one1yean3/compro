#include<stdio.h>
#include<limits.h>
void main()
{
    int x,y,MIN=INT_MAX,D,RESULT;
    scanf("%d",&x);
    for(int i=0;i<8;i++)
    {
        scanf("%d",&y);
        D = x - y;
        if(D < 0){
            D = D*-1;
        }
        if(D < MIN){
            MIN = D;
            RESULT = y;
        }
    }
    printf("%d",RESULT);
}
