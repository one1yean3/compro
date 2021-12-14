#include<stdio.h>
void main()
{
    int x;
    scanf("%d",&x);
    int n=x;
    for(int i=0;i<x;i++){
        for(int space=0;space<i;space++){
            printf(" ");
        }
        for(int c=0;c<n;c++){
            if(x>9){
                printf("%d",n%10);
            }
            else{
                printf("%d",n);
            }
        }
        printf("\n");
        n--;
    }
}
