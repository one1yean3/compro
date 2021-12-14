#include<stdio.h>
void main()
{
    int N;
    scanf("%d",&N);
    int Team1[N],Team2[N],s1=0,s2=0;
    for(int i=0;i<N;i++){
        scanf("%d",&Team1[i]);
    }
    for(int i=0;i<N;i++){
        scanf("%d",&Team2[i]);
    }
    for(int i=0;i<N;i++){
        if(Team1[i]==Team2[i]){
            s1+=1;
            s2+=1;
        }
        else if(Team1[i]>Team2[i]){
            s1+=2;
        }
        else if(Team2[i]>Team1[i]){
            s2+=2;
        }
    }
    if(s1>s2){
        printf("Team 1 wins\n");
        printf("Score %d to %d",s1,s2);
    }
    else if(s2>s1){
        printf("Team 2 wins\n");
        printf("Score %d to %d",s2,s1);
    }
    else if(s1==s2){
        printf("Draw game\n");
        printf("Score %d to %d",s1,s2);
    }
}
