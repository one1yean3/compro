#include<stdio.h>
void main()
{
    int R,C,i,g,t=1;
    scanf("%d %d",&R,&C);
    for(i=0;i<R;i++){
        for(g=0;g<C;g++){
            printf("%d ",t);
            t++;
        }
        printf("\n");
    }
}
