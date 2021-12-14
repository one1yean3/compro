import java.util.Scanner;
public class Cumulation {
    static void ArrayAdd(int X,int Y,int Z,int[] A){
        for(int i = X ; i <= Y ; i++){
            A[i] += Z;
        }
        for(int i = 1 ; i < A.length-1 ; i++){
            System.out.print(A[i]+" ");
        }
        System.out.println("");
    }
    public static void main(String[] args) {
        Scanner scan = new Scanner(System.in);
        int N = scan.nextInt();
        int[] A = new int[N+1];
        int K = scan.nextInt();
        for(int i = 0 ; i < K ; i++){
            int X = scan.nextInt();
            int Y = scan.nextInt();
            int Z = scan.nextInt();
            ArrayAdd(X,Y,Z,A);
        }
    }
    
}
