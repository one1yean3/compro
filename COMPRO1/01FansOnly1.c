#include<stdio.h>
void main()
{
    int x;
    float pn=0,n=0;
    while(1){
        scanf("%d",&x);
        if(x==-1){
            break;
        }
        if(x==4){
            pn++;
            printf("Alert!! Porn contents\n");
        }
        n++;
    }
    n=(pn/n*100);
    if(n>=60){
        printf("The user was banned");
    }
}
