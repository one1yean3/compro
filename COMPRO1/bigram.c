#include<stdio.h>
void main()
{
    int x,y,a=0,b=0,c=0,d=0;
    scanf("%d",&x);
    while(1){
        scanf("%d",&y);
        if(y!=0&&y!=1){
            break;
        }
        if(x==0&&y==0){
            a++;
        }
        if(x==0&&y==1){
            b++;
        }
        if(x==1&&y==0){
            c++;
        }
        if(x==1&&y==1){
            d++;
        }
        x=y;
    }
    printf("%d\n%d\n%d\n%d",a,b,c,d);
}
