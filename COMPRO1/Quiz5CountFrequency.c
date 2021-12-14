#include<stdio.h>
void main()
{
    int N,n=0,n1=0,max=0;
    scanf("%d",&N);
    int inp[N][2];
    for(int i=0;i<N;i++){
        inp[i][1]=0;
    }
    for(int i=0;i<N;i++){
        scanf("%d",&inp[i][0]);
        for(int c=0;c<=i;c++){
            if(inp[c][0]==inp[i][0]){
                inp[i][1]++;
            }
        }
    }
    for(int i=0;i<N;i++){
        if(inp[i][1]==1){
            n1++;
        }
    }
    printf("%d\n",n1);
    for(int i=0;i<N;i++){
        if(inp[i][1]==1){
            printf("%d ",inp[i][0]);
            for(int c=0;c<N;c++){
                if(inp[c][1]>max&&inp[c][0]==inp[i][0]){
                    max=inp[c][1];
                }
            }
        }
        if(max!=0){
            printf("%d\n",max);
        }
        max=0;
    }
}
