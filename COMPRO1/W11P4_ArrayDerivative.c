#include<stdio.h>
void derivative(int* AInput, int* AOutput, const int N)
{
    for(int i=0;i<N;i++){
        if(i!=0){
            AOutput[i]=AInput[i]-AInput[i-1];
        }
        else{
            AOutput[i]=0;
        }
        //printf("Output %d =Input[i] %d Input[i-1]%d \n",AOutput[i],AInput[i],AInput[i-1]);
    }
    return AOutput;
}



void main()
{
    const int N;
    scanf("%d",&N);
    int AInput[N];
    int AOutput[N];
    for(int i=0;i<N;i++){
        scanf("%d",&AInput[i]);
        AOutput[i]=0;
    }
    derivative(AInput,AOutput,N);
    for(int i=0;i<N;i++){
        printf("%d ",AOutput[i]);
    }
}
