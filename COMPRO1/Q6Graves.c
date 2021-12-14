void main()
{

    int n,m;
    scanf("%d %d",&n,&m);
    int ar[n][m];

    for(int o=0;o<n;o++){
        for(int d=0;d<m;d++){
            scanf("%d",&ar[o][d]);
        }
    }

    int a[n][m];
    for(int o=0;o<n;o++){
        for(int d=0;d<m;d++){
            a[o][d]=0;
        }
    }

    int count=0;
    for(int i=1;i<n-1;i++){
        for(int j=1;j<m-1;j++){
            if( ar[i][j] < ar[i-1][j] && ar[i][j] < ar[i+1][j] && ar[i][j] < ar[i][j-1] && ar[i][j] < ar[i][j+1]){
                a[i][j]++;
                count++;
            }
        }
    }

    int pass = 4;
    int countF =0;
    for(int i=1;i<n-1;i++){
        for(int j=1;j<m-1;j++){
            int check = 0;
            //
            if( ar[i][j] < ar[i-1][j] ){
                check++;
            }
            else if( a[i-1][j] == 1 ){
                check++;
            }
            //
            if( ar[i][j] < ar[i+1][j]){
                check++;
            }
            else if( a[i+1][j] == 1 ){
                check++;
            }
            //
            if( ar[i][j] < ar[i][j-1]){
                check++;
            }
            else if( a[i][j-1] == 1 ){
                check++;
            }
            //
            if( ar[i][j] < ar[i][j+1]){
                check++;
            }
            else if( a[i][j+1] == 1 ){
                check++;
            }

            if(check == pass){
                countF++;
            }
        }
    }
    printf("%d",countF);
}
