import java.util.Scanner;
public class SlotRsv {
    public static void main(String[] args) {
        Scanner scan = new Scanner(System.in);
        int N = scan.nextInt();
        int[] A = new int[N+1];
        int[] B = new int[N+1];
        int K = scan.nextInt();
        int P = scan.nextInt();
        for(int i = 0 ; i < P ; i++){
            int x = scan.nextInt();
            if(A[x] < K){
                A[x]++;
                System.out.println("1");
            }
            else{
                B[x]++;
                System.out.println("2");
            }
        }
        for(int i = 1 ; i < A.length ; i++){
            System.out.print(A[i]+" ");
        }
        System.out.println("");
        for(int i = 1 ; i < A.length ; i++){
            System.out.print(B[i]+" ");
        }
    }
    
}
