#include<stdio.h>
void main()
{
    char A[20];
    int aa[12]={0};
    char card[12]= {'A','2','3','4','5','6','7','8','9','J','Q','K'};
    for(int i=0;i<12;i++){
        scanf("%c",&A[i]);
        if(A[i]=='A'){
            aa[0]++;
        }
        if(A[i]=='2'){
            aa[1]++;
        }
        if(A[i]=='3'){
            aa[2]++;
        }
        if(A[i]=='4'){
            aa[3]++;
        }
        if(A[i]=='5'){
            aa[4]++;
        }
        if(A[i]=='6'){
            aa[5]++;
        }
        if(A[i]=='7'){
            aa[6]++;
        }
        if(A[i]=='8'){
            aa[7]++;
        }
        if(A[i]=='9'){
            aa[8]++;
        }
        if(A[i]=='J'){
            aa[9]++;
        }
        if(A[i]=='Q'){
            aa[10]++;
        }
        if(A[i]=='K'){
            aa[11]++;
        }
    }
    for(int i=0;i<12;i++){
        if(aa[i]>0){
            printf("%c ",card[i]);
        }
    }
}
