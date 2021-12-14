#include<stdio.h>
void main()
{
    int n;
    scanf("%d",&n);
    int g=(2*n)-1;
    for(int i=0;i<=n;i++){
        if(i==n){
            for(int d=0;d<i;d++){
                printf(" ");
            }
            printf("%d",i);
            for(int r=0;r<g;r++){
                printf(" ");
            }
        }
        else{
            for(int d=0;d<i;d++){
                printf(" ");
            }
            printf("%d",i);
            for(int r=0;r<g;r++){
                printf(" ");
            }
            printf("%d\n",i);
            g-=2;
        }
    }
}
