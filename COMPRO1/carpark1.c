#include<stdio.h>
void main()
{
    int a,b,c,d,min1=0,min2=0,result=0,hour=0,min=0;
    scanf("%d %d %d %d",&a,&b,&c,&d);
    min1=(a*60)+b;
    min2=(c*60)+d;
    result=min2-min1;
    if(result>59){
        hour=result/60;
        min=result-(hour*60);
    }
    else{
        hour=0;
        min=result;
    }
    printf("%d:%d",hour,min);
}
