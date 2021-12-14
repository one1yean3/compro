import java.util.Scanner;
public class ConsecSale {
    public static void main(String[] args) {
        
        //System.out.println(??);
        Scanner scan = new Scanner(System.in);
        int N = scan.nextInt();
        int P = scan.nextInt();
        int D = P;
        boolean[] condo = new boolean[N];
        int[] A = new int[N]; 
        for(int i=0;i<N;i++){
            A[i] = D;
            D++;
        }
        
        int K = scan.nextInt();
        for(int i=0;i<K;i++){
            int x = scan.nextInt();
            for(int d=0;d<N;d++){
                if(x == A[d]){
                    condo[d] = true;
                }
            }
        }
        
        int count=0;
        for(int i=0;i<N;i++){
            if(!condo[i]){
                count++;
            }
        }
        
        System.out.println(count);
        int checkc = 1;
        int max=0;
        for(int i=0;i<N;i++){
            if(!condo[i]){
                checkc++;
            }
            else{
                checkc = 1;
            }
            if(checkc>max){
                max=checkc;
            }
            
        }
        System.out.println(max-1);
        
        
    }
}
