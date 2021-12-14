#include<stdio.h>
void main()
{
    int R,C,i,g;
    scanf("%d %d",&R,&C);
    for(i=0;i<R;i++){
        for(g=0;g<C;g++){
            printf("*");
        }
        printf("\n");
    }
}
