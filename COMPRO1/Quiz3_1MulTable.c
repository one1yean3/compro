#include<stdio.h>
void main()
{
    int a,b,x,y;
    scanf("%d %d %d %d",&a,&b,&x,&y);
    int d=b;
    for(int c=a;c<x;c++){
        for(int i=b;i<=y;i++){
            printf("%d x %d = %d\n",c,i,c*i);
        }
        b=1;
        a++;
    }

    if(a==x){
        for(int i=1;i<=d;i++){
            printf("%d x %d = %d\n",x,i,a*i);
        }
    }
}
