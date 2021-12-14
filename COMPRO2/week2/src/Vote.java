import java.util.Scanner;
public class Vote {
    public static void main(String[] args) {
        Scanner scan = new Scanner(System.in);
        int N = scan.nextInt();
        int[] A = new int[N+1];
        int K = scan.nextInt();
        int max = 0;
        int count = 0;
        for(int i = 0 ; i < K ; i++){
            int x = scan.nextInt();
            A[x]++;
            if(A[x]>max){
                max = A[x];
                count = x;
            } 
        }
        System.out.print(count+"\n"+max);
        
        
    }
    
}
