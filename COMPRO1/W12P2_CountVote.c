#include<stdio.h>
void main(){
    int x,y,d,countmax,max=0;
    scanf("%d %d",&x,&y);
    int inp[x];
    for(int i=0;i<x;i++){
        inp[x]=0;
    }
    for(int i=0;i<y;i++){
        scanf("%d",&d);
        for(int c=0;c<x;c++){
            if(inp[c]==d){
                inp[c]++;
                printf("%d",inp[c]);
            }
        }
    }
    for(int i=0;i<x;i++){
        if(inp[i]>max){
            max=inp[i];
            countmax=i+1;
        }
    }
    printf("%d\n%d",max,countmax);
}
