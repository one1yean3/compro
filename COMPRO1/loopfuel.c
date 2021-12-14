#include<stdio.h>
void main()
{
    int x,y;
    while(1){
        scanf("%d %d",&x,&y);
        if(x<=0||y<=0){
            break;
        }
        if(x%y==0){
            printf("%d\n",x/y);
        }
        else{
            printf("%d\n",(x/y)+1);
        }
    }
}
