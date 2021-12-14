#include<stdio.h>
void main()
{
    int r,M,g,cc;
    double sum=0;
    scanf("%d",&r);
    for(int x=0;x<r;x++){
        scanf("%d",&M);
        //C
        for(int c=0;c<M;c++){
            scanf("%d",&cc);
            scanf("%d",&g);
            //1 8.50
            if(g==1){
                for(int d=0;d<cc;d++){
                    printf("-");
                    sum+=8.50;
                }
            }
            //0 9.75
            else if(g==0){
                for(int d=0;d<cc;d++){
                    printf("#");
                    sum+=9.75;
                }
            }
        }
        printf("\n");
    }
    printf("%.2f",sum);
}
