#include<stdio.h>
void main()
{
    int x,y,sumpos=0,sumneg=0;
    while(1){
        scanf("%d %d",&x,&y);
        if(x==0&&y==0){
            break;
        }
        if(x==1){
            sumpos+=y;
        }
        else{
            sumneg+=y;
        }
    }
    if(sumpos-sumneg>=0){
        printf("Good\n%d",sumpos-sumneg);
    }
    else{
        printf("Bad\n%d",sumneg-sumpos);
    }
}
