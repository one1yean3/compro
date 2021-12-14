#include<stdio.h>
void main()
{
    int N,c=0,peak=0,i=0;
    scanf("%d",&N);
    int m[N][N];
    int res[N][3];
    for(int row=0;row<N;row++){
        for(int col=0;col<N;col++){
            scanf("%d",&m[row][col]);
        }
    }
    for(int row=0;row<N;row++){
        for(int col=0;col<N;col++){
            if(row!=0&&row!=N-1&&col!=N-1&&col!=0){
                peak=m[row][col];
                for(int rowp=row-1;rowp<=row+1;rowp++){
                    for(int colp=col-1;colp<=col+1;colp++){
                        if(rowp!=row||colp!=col){
                            if(m[rowp][colp]>=peak){
                                c++;
                            }
                        }
                    }
                }
                if(c==0){
                    i++;
                    res[i][0]=peak;
                    res[i][1]=row;
                    res[i][2]=col;
                }
                c=0;
            }
        }
    }
    printf("%d\n",i);
    for(int row=1;row<=i;row++){
        for(int col=0;col<3;col++){
            printf("%d ",res[row][col]);
        }
        printf("\n");
    }
}
