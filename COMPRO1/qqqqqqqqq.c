#include<stdio.h>
main()
{
    int x,y,z,a,b,c;
    scanf("%d %d %d",&x,&y,&z);
    a=x/3;
    b=y/4;
    c=z/2;
    printf("%d %d %d\n",a,b,c);
    if(a<b){
        printf("%d",a);
    }
}
