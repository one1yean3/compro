#include<stdio.h>
void main()
{
    int N;
    int x,y,n=0,c;
    double sum=0,result;
    scanf("%d",&N);
    int array[N+1];
    for(int i=1;i<=N;i++){
        scanf("%d",&c);
        array[i]=c;
    }
    scanf("%d %d",&x,&y);
    for(int i=1;i<=N;i++){
        if(array[i]>=x&&array[i]<=y){
            sum+=array[i];
            n++;
        }
    }
    result=sum/n;
    if(n!=0){
        printf("%d\n%.2lf",n,result);
    }
    else{
        printf("0\nnone");
    }
}
