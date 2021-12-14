#include<stdio.h>
void main()
{
    int N,K,g,s1,s2,quota=0,people=0,i,dir1=0,dir2=0;
    scanf("%d %d",&N,&K);
    for(i=0;i<N;i++){
        if(i==N){
            if(2*K==dir1+dir2){
            break;
            }
        }
        scanf("%d %d %d",&g,&s1,&s2);
        people++;
        if(s1<9&&s2<9){
            continue;
        }
        else if(s1>=9&&s2<9){
            if(dir1<K){
                printf("%d %d\n",people,1);
                dir1++;
            }
        }
        else if(s2>=9&&s1<9){
            if(dir2<K){
                printf("%d %d\n",people,2);
                dir2++;
            }
        }-
        else if(dir1+dir2<2*K){
            if(s1>=9&&s2>=9){
            if(g==1){
                if(dir1<K){
                    printf("%d %d\n",people,1);
                    dir1++;
                }
                else if(dir1==K){
                printf("%d %d\n",people,2);
                dir2++;
            }
            }
            else if(g==2){
                if(dir2<K){
                    printf("%d %d\n",people,2);
                    dir2++;
                }
                else if(dir2==K){
                    printf("%d %d\n",people,1);
                    dir1++;
                }
            }
        }
    }
    }
}
