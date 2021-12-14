#include<stdio.h>
void main()
{
    int W,N;
    scanf("%d %d",&W,&N);
    for(int i=0;i<(W*N)+(N+1);i++){
        printf("*");
    }
    printf("\n");
    for(int i=0;i<(W*N)+1;i+=W){
        if(i%W==0){
            printf("*");
        }
        for(int c=0;c<W;c++){
            printf(" ");
        }
    }
    printf("\n");
    for(int i=0;i<(W*N)+(N+1);i++){
        printf("*");
    }
}
