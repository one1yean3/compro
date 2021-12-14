#include<stdio.h>
void main()
{
    int  N,d,m,ng=0,g=0;
    scanf("%d",&N);
    for(int i=1;i<=N;i++){
        for(int c=0;c<5;c++){
            scanf("%d %d",&d,&m);
            if(d==1&&m==1){
                ng++;
            }
            if(d==1&&m==0){
                g++;
            }
            if(d==0&&m==1){
                ng++;
            }
            if(d==0&&m==0){
                ng++;
            }
        }
        if(ng>g){
            printf("Case#%d was not guilty",i);
        }
        else{
            printf("Case#%d was guilty",i);
        }
        printf("\n");
        ng=0;
        g=0;
    }
}
