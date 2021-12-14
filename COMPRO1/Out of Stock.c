#include<stdio.h>
#include<limits.h>
void main()
{
    int stock[100],stockC[100],max=INT_MIN,c=0,sc=0;
    int x;
    for(int i=0;i<=100;i++){
        stock[i]=0;
    }
    for(;;){
        scanf("%d",&x);
        if(x==0){
            printf("END");
            break;
        }
        else if(x>0){
            sc++;
            stockC[sc]=x;
            stock[x]++;
            if(x>max){
                max=x;
            }
            for(int i=sc;i>=1;i--){
                printf("%d ",stockC[i]);
            }
            printf("\n");
        }
        else if(x<0){
            x=-x;
            for(int i=max;i>0;i--){
                if(i==x){
                    stock[i]--;
                    c++;
                }
            }
            if(c==1){
                printf("send No %d\n",x);
                for(int d=max;d>0;d--){
                    if(stock[d]==1){
                        printf("%d ",d);
                    }
                }
                c=0;
                printf("\n");
            }
            else if(c==0){
                printf("Out of stock\n");
            }
        }
    }
}

