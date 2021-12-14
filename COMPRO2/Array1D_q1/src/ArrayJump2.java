import java.util.Scanner;
public class ArrayJump2 {
    public static void main(String[] args) {
        Scanner scan = new Scanner(System.in);
        int N = scan.nextInt();
        int K = scan.nextInt();
        int[] ar = new int[N+1];
        for(int i = 1 ; i <= N ; i++){
            ar[i] = scan.nextInt();
        }
        for(int i = K ; i <= N ; i+=ar[i]){
            System.out.println(i+" "+ar[i]);
        }
        System.out.println("out of bounds");
    }
    
}
