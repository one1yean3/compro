import java.util.Scanner;
public class Power {
    static void getPrice(int[] price, final int K, final int M){
        int sum = 0 ;
        int want = K/2;
        int min = M-want;
        int max = M+want;
        if( min >= 1 && max <= price.length-1){
            for( int i = M-want ; i <= M+want ; i++ ){
                sum += price[i];
            }
            System.out.print(sum);
        }
        else{
            if( min < 1 ){
                min = 1 ;
            }
            if( max > price.length-1 ){
                max = price.length-1 ;
            }
            for(int i=min;i<=max;i++){
                sum += price[i];
            }
            System.out.print("no "+sum);
        }
    }
    static void isLaborReady(int[] labor,final int K,final int M){
        int want = K/2;
        int min = M-want;
        int max = M+want;
        boolean negative = false;
        if( min >= 1 && max <= labor.length-1){
            for( int i = min ; i <= max ; i++ ){
                if(labor[i]<5){
                    negative = true;
                }
            }
            if(!negative){
                System.out.print(" labor");
            }
        }
    }
    static void isPowerReady(int[] power, final int K,final int M){
        int want = K/2;
        int min = M-want;
        int max = M+want;
        boolean negative = false;
        if( min >= 1 && max <= power.length-1){
            for( int i = min ; i <= max ; i++ ){
                if(power[i] == 1){
                    negative = true;
                }
            }
            if(negative){
                System.out.print(" power");
            }
        }
    }
    public static void main(String[] args) {
        Scanner scan = new Scanner(System.in);
        
        int N = scan.nextInt();
        
        int[] price = new int[N+1];
        int[] labor = new int[N+1];
        int[] power = new int[N+1];
        
        for(int i=1;i<=N;i++){
            price[i] = scan.nextInt();
        }
        for(int i=1;i<=N;i++){
            labor[i] = scan.nextInt();
        }
        for(int i=1;i<=N;i++){
            power[i] = scan.nextInt();
        }
        
        int Q = scan.nextInt();
        
        for(int i=0;i<Q;i++) {
            final int K = scan.nextInt();
            final int M = scan.nextInt();
            getPrice(price, K, M);
            isLaborReady(labor, K, M);
            isPowerReady(power, K, M);
            System.out.println("");
            
        }
    }
}