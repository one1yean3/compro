#include<stdio.h>
void main()
{
    int R,C,i,g,r=0,c;
    scanf("%d %d",&R,&C);
    for(i=0;i<=R;i++){
        for(g=0;g<=C;g++){
            printf("(%d, %d) ",r,g);
            c++;
        }
        r++;
        printf("\n");
    }
}
