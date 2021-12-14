#include<stdio.h>
int isUnique(int* ar, int N)
{
    int n=0;
    for(int i=0;i<N;i++){
        for(int c=0;c<N;c++){
            if(ar[i]==ar[c]&& i!=c){
                n++;
            }
        }
    }
    if(n>0){
        printf("0");
    }
    else{
        printf("1");
    }
}
void main()
{
    int N;
    scanf("%d",&N);
    int ar[N];
    for(int i=0;i<N;i++){
        scanf("%d",&ar[i]);
    }
    isUnique(ar,N);
}
