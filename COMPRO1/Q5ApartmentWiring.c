#include<stdio.h>
void main()
{
    int n,m,sum=0,x=0;
    scanf("%d %d",&n,&m);
    int ni[n],mi[m];
    for(int c=0;c<n;c++){
        scanf("%d",&ni[c]);
    }
    for(int c=0;c<m;c++){
        scanf("%d",&mi[c]);
    }
    int i=0;
    for(int c=0;c<m;c++){
        if(i==n){
            i--;
        }
        x=mi[c]-ni[i];
        if(x<0){
            x=(x*-1);
        }
        sum+=x;
        i++;
    }
    printf("%d",sum);
}
