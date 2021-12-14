#include<stdio.h>
void main()
{
    int x,i;
    for(;;){
        scanf("%d",&x);
        if(x<=0){
            break;
        }
        for(i=1;i<=x;i++){
        printf("*");
        }
        printf("\n");
    }
}
