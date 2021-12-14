
//
// Created by Warat narattharaksa on 5/8/2021 AD.
//

#include <stdio.h>

int main() {
    int N,k,count1=0,count2=0,count3=0,count4=0;
    char country1 = "Thailand",country2="Taiwan",country3="Malaysia",country4="Finland";
    scanf("%d",&N);
    for(int i =1;i<=N;i++){
        scanf("%d",&k);
        switch (k) {
            case(1):
                count1++;
                break;

            case(2):
                count2++;
                break;

            case(3):
                count3++;
                break;

            case(4):
                count4++;
                break;

        }
    }
    int arr[4] ={count1,count2,count3,count4};


    int max = arr[0];
    for(int i=0;i<3;i++){
        if(max <= arr[i]){
            max = arr[i];
        }
    }

    if(max == 1 ){
        printf("%s won with a score of %d",country1,max);
    }else if(max == 2){
        printf("%s won with a score of %d",country2,max);
    }else if(max == 3){
        printf("%s won with a score of %d",country3,max);
    }else if(max == 4){
        printf("%s won with a score of %d",country4,max);
    }

}
main.c
Displaying main.c.
