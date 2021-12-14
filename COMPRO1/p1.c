#include<stdio.h>
void main()
{
    int N;
    scanf("%d",&N);

    int i=1;
    if(N<=0)
    {
        printf("Invalid input");
    }
    else
    {
        while(i<=N)
        {
            printf("%d \n",i);
            i++;
        }
    }
}
