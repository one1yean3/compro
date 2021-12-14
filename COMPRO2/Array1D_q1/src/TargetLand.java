import java.util.Scanner;

public class TargetLand {
    
    static void getPrice(int[] price, final int K, final int M){
        int sum = 0 ;
        int want = K/2;
        int min = M-want;
        int max = M+want;
        //System.out.println(price.length-1);
        if( min >= 1 && max <= price.length-1){
            for( int i = M-want ; i <= M+want ; i++ ){
                sum += price[i];
            }
            System.out.println(sum);
        }
        else{
            System.out.println("no");
        }
    }
    
    
    public static void main(String[] args) {
        Scanner scan = new Scanner(System.in);
        int N = scan.nextInt();
        int[] price = new int[N+1];
        for(int i=1;i<=N;i++){
            price[i] = scan.nextInt();
        }
        int Q = scan.nextInt();
        for(int i=0;i<Q;i++) {
            final int K = scan.nextInt();
            final int M = scan.nextInt();
            getPrice(price, K, M);
        }
    }
    
}
