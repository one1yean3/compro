#include<stdio.h>
void main()
{
    int N;
    scanf("%d",&N);
    int a[N][N];
    int d=1;
    for(int r=0;r<N;r++){
        for(int c=0;c<N;c++){
            a[r][c]=-1;
        }
    }

    //left
    int num=1;
    for(int r=N-1;r>=0;r--){
        a[r][0]=num%10;
        num++;
    }

    //mid
    for(int r=1;r<N;r++){
        for(int c=1;c<N-1;c++){
            if(r==c){
                a[r][c]=num%10;
                num++;
            }
        }
    }

    //right
    for(int c=N-1;c>=0;c--){
        a[c][N-1]=num%10;
        num++;
    }


    for(int r=0;r<N;r++){
        for(int c=0;c<N;c++){
            if(a[r][c]!=-1){
                printf("%d ",a[r][c]);
            }
            else{
                printf("  ");
            }
        }
        printf("\n");
    }

}
