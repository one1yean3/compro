import java.util.Scanner;
public class NumMixer {
    public static void main(String[] args) {
        Scanner scan = new Scanner(System.in);
        final int N = scan.nextInt();
        int[] A = new int[N+1];
        for(int i = 1 ; i <= N ; i++){
            A[i] = scan.nextInt();
        }
        int[] B = new int[N+1];
        for(int i = 1 ; i <= N ; i++){
            B[i] = scan.nextInt();
        }
        int check = scan.nextInt();
        int count = 0;
        if(check > 0){
            for(int i = 1 ; i <= N ; i++){
                System.out.print(A[i]+" ");
                System.out.print(B[N-count]+" ");
                count++;
            }
        }
        else{
            for(int i = 1 ; i <= N ; i++){
                System.out.print(B[N-count]+" ");
                System.out.print(A[i]+" ");
                count++;
            }
        }
    }
}