#include<stdio.h>
void main()
{
    int x;
    scanf("%d",&x);
    int a[x];
    int count=0;
    int c1=0;
    int y;
    int sum=0;
    for(int i=0;i<x;i++){
        scanf("%d",&y);
        c1=0;
        for(int c=0;c<count;c++){
            if(y==a[c]){
                c1++;
            }
        }
        if(c1==0){
            a[count]=y;
            count++;
        }
    }
    printf("%d\n",count);
    for(int i=0;i<count;i++){
        sum+=a[i];
    }
    printf("%d",sum);
}
