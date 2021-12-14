#include<stdio.h>
#include<limits.h>
void main()
{
    int N,target,min=INT_MAX;
    scanf("%d",&N);
    int array[N];
    int n=0;
    for(int i=0;i<N;i++){
        scanf("%d",&array[i]);
    }
    scanf("%d",&target);
    for(int i=0;i<N;i++){
        if(abs(array[i]-target)<min){
            min=abs(array[i]-target);
        }
    }
    for(int i=0;i<N;i++){
        if(abs(array[i]-target)==min){
            n++;
        }
    }
    printf("%d\n%d",min,n);
}
