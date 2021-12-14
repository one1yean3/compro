#include<stdio.h>
void main()
{
    int a,b,x,y;
    scanf("%d %d %d %d",&a,&b,&x,&y);
    for(int c=a;c<x;c++){
        for(int i=b;i<=59;i++){
            if(i<10){
                printf("%d:0%d\n",a,i);
            }
            else{
                printf("%d:%d\n",a,i);
            }
        }
        a++;
        b=0;
    }
    if(a==x){
        for(int i=b;i<=y;i++){
            if(i<10){
                printf("%d:0%d\n",a,i);
            }
            else{
                printf("%d:%d\n",a,i);
            }
        }
    }
}
