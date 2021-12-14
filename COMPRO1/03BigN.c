#include<stdio.h>
void main()
{
    int N;
    scanf("%d",&N);
    int a[N][N];
    int count =1;

    for(int r=0;r<N;r++){
        for(int c=0;c<N;c++){
            a[r][c]=-1;
        }
    }

    for(int r=0;r<N;r++){
        a[r][0]=count%10;
        a[r][N-1]=count%10;
        a[r][r]=count%10;
        count++;
    }

    for(int r=0;r<N;r++){
        for(int c=0;c<N;c++){
            if(a[r][c]==-1){
                printf(" ");
            }
            else{
                printf("%d",a[r][c]);
            }
        }
        printf("\n");
    }


}
