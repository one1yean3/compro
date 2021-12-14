#include<stdio.h>
void main()
{
    int x,y,i=0;
    scanf("%d",&x);
    for(;;)
    {
        scanf("%d",&y);
        if(y==0)
        {
            break;
        }
        if(y==x)
        {
            i=i+1;
        }

    }
    if(i==0){
        printf("None");
    }
    else{
        printf("%d",i);
    }
}
