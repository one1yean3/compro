#include<stdio.h>
void main()
{
    float r,pie=3.1415926,res;
    scanf("%f",&r);
    if(r<=0){
        printf("invalid input");
    }
    else{
        res=pie*r*r;
        printf("%.5f",res);
    }
}
