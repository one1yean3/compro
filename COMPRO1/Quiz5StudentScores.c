#include<stdio.h>
void main()
{
    int M,N;
    scanf("%d %d",&M,&N);
    int score[M][N];
    int Sscore[M];
    for(int i=0;i<N;i++){
        for(int c=0;c<M;c++){
            scanf("%d",&score[c][i]);
        }
    }
    int sumc=0;
    float sum=0;
    for(int r=0;r<M;r++){
        for(int c=0;c<N;c++){
            printf("%d ",score[r][c]);
            sum+=score[r][c];
            sumc+=score[r][c];
        }
        Sscore[r]=sumc;
        printf("%d",sumc);
        printf("\n");
        sumc=0;
    }
    printf("average = %.2f\n",sum/M);
    int count=0;
    int pass[M];
    for(int i=0;i<M;i++){
        pass[i]=0;
        if(Sscore[i]>=sum/M){
            count++;
            pass[i]=i+1;
        }
    }
    printf("pass %d\n",count);
    for(int i=0;i<M;i++){
        if(pass[i]>0){
            printf("%d ",pass[i]);
        }
    }

}
