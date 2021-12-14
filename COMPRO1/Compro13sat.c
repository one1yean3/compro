#include<stdio.h>
void main()
{
    int N,K;
    scanf("%d",&N);
    int a[N];
    int tv=0,tc=0;
    for(int i=0;i<N;i++){
        scanf("%d",&a[i]);
        if(a[i]==1){
            printf("2 4");
            tv+=2;
            tc+=4;
        }
        if(a[i]==2){
            printf("1 2");
            tv+=1;
            tc+=2;
        }
        if(a[i]==3){
            printf("0 1");
            tv+=0;
            tc+=1;
        }
        if(a[i]>3){
            int Gv=0,Gc=0;
            Gv+=2;
            Gc+=3;
            for(int aa=2;aa<a[i]-3;aa++){
                Gv+=1;
                Gc+=1;
            }
            printf("%d %d",Gv,Gc);
            tv+=Gv;
            tc+=Gc;
        }
        printf("\n");
    }
    printf("totalVariable = %d , totalClause = %d",tv,tc);
}
