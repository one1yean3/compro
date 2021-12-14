#include<stdio.h>
#include<limits.h>
void main(){
    int i=0,x,c=1;
    scanf("%d",&x);
    while(c<=x/3){
        if(x%c==0){
            i++;
        }
        if(i==3){
            printf("%d is not prime",x);
            break;
        }
        c++;
    }
    if(i==3){
        printf("%d is prime",x);
    }
}
