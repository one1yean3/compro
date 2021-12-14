import java.util.Scanner;
public class CondoSales {
    static int CheckRoom(int[] result,int[] room,final int x,int count){
        boolean negative = false;
        for( int i = 0 ; i < room.length ; i++ ){
            if( x == room[i]){
                negative = true;
            }
        }
        boolean checkneg = false;
        if(negative){
            for(int i=0;i<count;i++){
                if(result[i]==x){
                    checkneg = true;
                }
            }
            if(checkneg){
                //
            }
            else{
                result[count] = x;
                count++;
            }
        }
        return count;
    }
    public static void main(String[] args) {
        Scanner scan = new Scanner(System.in);
        int N = scan.nextInt();
        int[] room = new int[N];
        int[] result = new int [N];
        int[][] checkres = new int [N][2];
        int P = scan.nextInt();
        int D = P;
        int count = 0;
        for( int i = 0 ; i < N ; i++ ){
            room[i] = D;
            checkres[i][0] = D;
            D++;
        }
        int K = scan.nextInt();
        for( int i = 0 ; i < K ; i++ ){
            final int x = scan.nextInt();
            count = CheckRoom(result,room,x,count);
        }
        System.out.println(count);
        for(int i=0;i<count;i++){
            for(int d=0;d<N;d++){
                if(checkres[d][0]==result[i]){
                    checkres[d][1]++;
                }
            }
        }
        for(int i=0;i<N;i++){
            if(checkres[i][1]>0){
                System.out.println(checkres[i][0]);
            }
        }
    }
    
}
