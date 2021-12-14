#include<stdio.h>
void main()
{
    int x,y,z,d;
    scanf("%d %d %d",&x,&y,&z);
    if(x>y){
        d=y;
        y=x;
        x=d;
    }
    for(int i=x;i<=y;i++){
        int j=i;
        printf("%d: ",i);
        for(int c=0;c<z;c++){
            printf("%d ",j);
            j+=i;
        }
        printf("\n");
    }
}
