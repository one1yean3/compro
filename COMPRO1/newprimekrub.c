#include<stdio.h>
void main()
{
    int x,satit=0,i=3;
    scanf("%d",&x);
    if(x==2){
        printf("2 is prime");
    }
    else if(x%2==0){
        printf("%d is not prime",x);
    }
    else{
        while(i<=x/4){
            if(x%i==0){
                printf("%d is not prime",x);
                satit++;
                break;
            }
            i+=2;
        }
        if(satit!=1){
            printf("%d is prime",x);
        }
    }
}
