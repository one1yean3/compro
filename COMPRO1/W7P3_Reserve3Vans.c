#include<stdio.h>
void main()
{
    int N,i,day,A=0,B=0,C=0;
    scanf("%d",&N);
    for(i=0;i<N;i++){
        scanf("%d",&day);
        if(A<=B&&A<=C){
            printf("A\n");
            A+=day;
        }
        else if(B<A&&B<=C){
            printf("B\n");
            B+=day;
        }
        else if(C<A&&C<B){
            printf("C\n");
            C+=day;
        }
    }
}
