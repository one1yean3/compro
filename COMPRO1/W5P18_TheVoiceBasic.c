#include<stdio.h>
void main()
{
    int K,K1,K2,S1,S2,G;
    scanf ("%d %d %d %d %d %d",&K,&K1,&K2,&S1,&S2,&G);
    if(K1<K){
        if(K2<K){
            if(S1>=9){
                if(S2>=9){
                    if(S1==S2){
                        if(G==1){
                            printf("1");
                        }
                        else{
                            printf("2");
                        }
                    }
                    else if(S1>S2){
                        printf("1");
                    }
                    else{
                        printf("2");
                    }
                }
                else{
                    printf("1");
                }
            }
            else if(S2>=9){
                printf("2");
            }
            else{
                printf("0");
            }
        }
        else if(K1<K2){
            printf("1");
        }
        else{
            printf("2");
        }
    }
    else if(K2<K){
        if(S2>=9){
            printf("2");
        }
        else{
            printf("0");
        }
    }
    else if(S1>=9){
        printf("1");
    }
    else{
        printf("0");
    }
}



