import java.util.Scanner;
public class Auction1 {
    static void HighestPrice(int[] A,int[] B,int N){
        for(int i = 0 ; i < N ; i++){
            if(B[i] > A[i]){
                A[i] = B[i];
            }
        }
        for(int i = 0 ; i < N ; i++){
            System.out.print(A[i]+" ");
        }
        System.out.println("");
    }
    public static void main(String[] args) {
        Scanner scan = new Scanner(System.in);
        int N = scan.nextInt();
        int[] A = new int[N];
        int[] B = new int[N];
        for(int i = 0 ; i < N ; i++){
            A[i] = scan.nextInt();
        }
        int K = scan.nextInt();
        for(int r = 0 ; r < K ; r++){
            for(int c = 0 ; c < N ; c++){
                B[c] = scan.nextInt();
            }
            HighestPrice(A,B,N);
        }
    }
}
