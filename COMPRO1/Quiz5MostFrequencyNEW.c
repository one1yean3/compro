#include<stdio.h>
int A[1000000][2]={0};
void main()
{
    int x;
    int max=0;
    int count=0;
    int size=0;
    for(;;){
        scanf("%d",&x);
        if(x<=0){
            break;
        }
        count++;

        int numc=0;
        for(int i=0;i<size;i++){
            if(x==A[i][0]){
                A[i][1]++;
                numc=1;
            }
        }
        if(numc==0){
            A[size][0]=x;
            A[size][1]=1;
            size++;
        }
    }
    for(int i=0;i<size;i++){
        if(A[i][1]>max){
            max=A[i][1];
        }
    }
    printf("%d\n",count);
    for(int i=0;i<size;i++){
        if(A[i][1]==max){
            printf("%d ",A[i][0]);
        }
    }
}
