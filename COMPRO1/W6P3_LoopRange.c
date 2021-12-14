#include<stdio.h>
main()
{
    int x,y;
    scanf("%d %d",&x,&y);
    if (x>y){
        printf("Invalid input");
    }
    while (x<=y){
        printf("%d ",x);
        x++;
    }
}
