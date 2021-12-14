#include<stdio.h>
void main()
{
    int x,y;
    scanf("%d %d",&x,&y);
    if(x==1&&y==3){
        printf("1");
    }
    else if(x==3&&y==1){
        printf("2");
    }
    else if(x>y){
        printf("1");
    }
    else if(y>x){
        printf("2");
    }
    else{
        printf("0");
    }
}
