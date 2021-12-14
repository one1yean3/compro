#include<stdio.h>
void main()
{
    int x,y,z,N,i=0;
    scanf("%d",&N);
    while(i<N){
        scanf("%d %d %d",&x,&y,&z);
        if(x==y&&x==z){
            printf("xyz\n");
        }
        else if(x==y){
            printf("xy\n");
        }
        else if(x==z){
            printf("xz\n");
        }
        else if(y==z){
            printf("yz\n");
        }
        else if(x>y&&x>z){
            printf("x\n");
        }
        else if(y>x&&y>z){
            printf("y\n");
        }
        else if(z>x&&z>x){
            printf("z\n");
        }
        i++;
    }
}
