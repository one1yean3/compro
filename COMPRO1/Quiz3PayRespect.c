#include<stdio.h>
void main()
{
    int x;
    scanf("%d",&x);
    int space1=x;
    int space2=0;
    for(int i=0;i<x;i++){
        for(int c=1;c<space1;c++){
            printf(" ");
        }
        printf("*");
        for(int c=0;c<space2;c++){
                printf(" ");
            }
        printf("*");
        space1--;
        space2+=2;
        printf("\n");
    }
}
