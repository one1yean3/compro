#include<stdio.h>

int inp[500000][2]={0};
int inp2[500000][2]={0};
int max=0;
int count=0;
void main()
{

    int x,n=0;
    for(int i=0;i<500000;i++){
        scanf("%d",&x);
        if(x==0){
            break;
        }
        inp[i][0]=x;
        inp2[i][0]=x;

        for(int c=0;c<=i;c++){
            if(inp[i][0]==inp2[c][0]){
                inp2[i][1]++;
            }
        }

        if(inp2[i][1]>max){
            max=inp2[i][1];
        }
        count++;

    }
    printf("%d\n",count);
    int d=0;
    for(int i=0;i<500000;i++){
        if(inp2[i][1]==0){
            break;
        }
        else if(inp2[i][1]==max){
            inp[d][1]=inp2[i][0];
            d++;
        }
    }
    for(int i=0;i<d;i++){
        printf("%d ",inp[i][1]);
    }
}
