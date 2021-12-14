#include<stdio.h>
void main()
{
    int N,x,sum=0,c=0;
    scanf("%d",&N);
    for(int i=0;i<N;i++){
        scanf("%d",&x);
        if(x<4){
            c++;
            if(c==3){
                break;
            }
        }
        else if(x==8){
            sum+=300;
            c=0;
        }
        else if(x>=4&&x<8){
            sum+=150;
            c=0;
        }
        else if(x>8&&x<=12){
            x=x-8;
            c=0;
            sum=sum+300+(x*50);
        }
        else if(x>12){
            sum=sum+300+(4*50);
            c=0;
        }
    }
    printf("%d",sum);
}
