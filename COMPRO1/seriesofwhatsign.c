#include<stdio.h>
void main()
{
    int a1,a2,a3,a4,N,x;
    scanf("%d %d %d %d",&a1,&a2,&a3,&a4);
    scanf("%d",&N);
    int sum=a1+a2+a3+a4;
    for(int i=0;i<N-4;i++){
        x=(a1+a3)*5/4;
        if(x%2!=0){
            x=(x*-1);
        }
        sum+=x;
        a1=a2;
        a2=a3;
        a3=a4;
        a4=x;
    }
    printf("%d",sum);
}
