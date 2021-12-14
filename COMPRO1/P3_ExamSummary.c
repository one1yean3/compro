#include<stdio.h>
void main()
{
    int a,b,c,d,N,sa,sb,sc,sd,pass=0,ac=0,bc=0,cc=0,dc=0,pass2=0;
    scanf("%d %d %d %d",&a,&b,&c,&d);
    scanf("%d",&N);
    for(int i=0;i<N;i++){
        scanf("%d %d %d %d",&sa,&sb,&sc,&sd);
        if(sa>=a){
            pass++;
            ac++;
        }
        if(sb>=b){
            pass++;
            bc++;
        }
        if(sc>=c){
            pass++;
            cc++;
        }
        if(sd>=d){
            pass++;
            dc++;
        }
        if(pass>2){
            printf("pass");
            pass2++;
        }
        else{
            printf("fail");
        }
        printf("\n");
        pass=0;
    }
    printf("%d\n",pass2);
    printf("%d %d %d %d",ac,bc,cc,dc);
}
