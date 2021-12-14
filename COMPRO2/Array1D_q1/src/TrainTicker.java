import java.util.Scanner;
public class TrainTicker {
    public static void main(String[] args) {
        Scanner scan = new Scanner(System.in);
        int N = scan.nextInt();
        int[] sathanee = new int[N+1];
        int P = scan.nextInt();
        int K = scan.nextInt();
        for(int i = 0 ; i < K ; i++){
            boolean negative = false;
            int X = scan.nextInt();
            int Y = scan.nextInt();
            int Z = scan.nextInt();
            
            for(int c=X ; c<Y ; c++ ){
                if(sathanee[c] + Z > P){
                    negative = true;
                }
            }
            if(!negative){
                for(int c=X ; c<Y ; c++ ){
                    sathanee[c] += Z ;
                }
                System.out.println("Y");
            } 
            else{
                System.out.println("N");
            }
            
            
        }
        
    }
    
}
