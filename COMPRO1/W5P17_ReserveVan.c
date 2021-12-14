#include <stdio.h>
main()
{
    int x,y,z;
    scanf("%d %d %d",&x,&y,&z);
    if(x<=y)
    {
        if(x<=z)
        {
            printf("A");
        }
        else
        {
            printf("C");
        }
    }
    else if(y<x)
    {
        if(y<=z)
        {
            printf("B");
        }
        else
        {
            printf("C");
        }
    }
}



