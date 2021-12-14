#include<stdio.h>
void main()
{
    int N,sum=0;
    scanf("%d",&N);
    int x[N][N];
    for(int row=0;row<N;row++){
        for(int col=0;col<N;col++){
            scanf("%d",&x[row][col]);
        }
    }
    for(int row=0;row<N;row++){
        for(int col=row;col<N;col++){
            if(col!=row){
                if(x[row][col]-x[col][row]<0){
                    sum+=x[col][row]-x[row][col];
                }
                else{
                    sum+=x[row][col]-x[col][row];
                }
            }
        }
    }
    printf("%d",sum);
}
