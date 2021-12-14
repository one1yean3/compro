import java.util.Scanner;
public class Box1 {
    static void Box1(final int check,final int Q,final int B,int[] A,int[] C){
        if(check == 1){
            if(C[B]+Q <= A[B]){
                C[B]+=Q;
                System.out.println(C[B]);
            }
            else{
                System.out.println("-1");
            }
        }
        else if(check == 2){
            if(C[B]-Q >= 0){
                C[B]-=Q;
                System.out.println(C[B]);
            }
            else{
                System.out.println("-1");
            }
        }
    }
    public static void main(String[] args) {
        Scanner scan = new Scanner(System.in);
        int N = scan.nextInt();
        int[] A = new int[N+1];
        int[] C = new int[N+1];
        for(int i = 1 ; i <= N ; i++){
            A[i] = scan.nextInt();
        }
        int K = scan.nextInt();
        for(int i = 0 ; i < K ; i++){
            final int check = scan.nextInt();
            final int Q = scan.nextInt();
            final int B = scan.nextInt();
            Box1(check,Q,B,A,C);
        }
        
    }
    
}
