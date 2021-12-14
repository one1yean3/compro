#include<stdio.h>
#include<limits.h>
void main()
{
    int x,y,u=0,max=INT_MIN,z=0;
    scanf("%d",&x);
    while(1)
    {
        scanf("%d",&y);
        if(y==0)
        {
            break;
        }
        if(y==x)
        {
            u=u+1;
            z=z+1;
        }
        if(y!=x)
        {
            u=0;
        }
        if(u>max)
        {
            max=u;
        }
    }
    printf("%d\n",max);
    printf("%d",z);

}
