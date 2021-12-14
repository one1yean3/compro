#include<stdio.h>
main()
{
    int x,i;
    i=1;
    scanf("%d",&x);
    while (i<=x)
    {
        printf("%d\n",i);
        i++;
    }
    if(x<=0)
    {
        printf("Invalid input");
    }
}
