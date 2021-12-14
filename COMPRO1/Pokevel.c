#include<stdio.h>

struct {
    int code;
    char name[52];
    int level[9];
} typedef POKEMON;

void main()
{
    POKEMON mon[200];
    int N, K;
    scanf("%d", &N);
    for(int i = 0; i < N; ++i) {
    scanf("%d", &mon[i].code);
    scanf("%s", &mon[i].name);
        for(int v = 1; v <= 8; ++v) {
            scanf("%d", &mon[i].level[v]);
        }
    }
    scanf("%d", &K);

    int idcode,plevel;
    for(int i=0;i<K;i++){
        scanf("%d %d",&idcode,&plevel);
        for(int pok=0;pok<N;pok++){
            if(idcode==mon[pok].code){
                printf("%s ",mon[pok].name);
                for(int v=1; v<=8;v++){
                    if(plevel==v){
                        printf("%d",mon[pok].level[v]);
                    }
                }
            }
        }
        printf("\n");
    }
}

