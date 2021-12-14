#include<stdio.h>
void main()
{
    int km,litre;
    scanf("%d %d",&km,&litre);
    if(km%litre==0){
        printf("%d",km/litre);
    }
    else{
        printf("%d",(km/litre)+1);
    }
}
