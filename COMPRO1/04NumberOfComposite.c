#include<stdio.h>
void main()
{
    int x,c=0,d;
    scanf("%d",&x);
    d=x;
    for(int i=1;i<=d;i+=2){
        if(x%i==0){
            c++;
        }
        if(i==100001){
            c++;
            d=x/3;
        }
    }
    if(c==2){
        printf("%d is prime",x);
    }
    else{
        printf("%d",c);
    }
}
