#include<stdio.h>
void main()
{
    int W,N;

    scanf("%d %d",&W,&N);
    for(int i=1;i<=3;i++){
        if(i==1||i==3){
            for(int c=0;c<W*N+N+1;c++){
                printf("*");
            }
            printf("\n");
        }
        else{
            for(int j=1;j<=W;j++){
                printf("*");
                for(int g=0;g<W;g++){
                    printf(" ");
                }
            }
            printf("\n");
        }
    }

}
