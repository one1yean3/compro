import java.util.Scanner;
public class ArrayOcc1 {
    public static void main(String[] args) {
        Scanner scan = new Scanner(System.in);
        int N = scan.nextInt();
        int[] A = new int[N+1 ];
        int max = N;
        int count = 0;
        int countout = 0;
        int K = scan.nextInt();
        for(int i = 0 ; i < K ; i++){
            int x = scan.nextInt();
            if(x >= 1 && x <= max){
                if(A[x] < 1){
                    A[x]++;
                }
                else{
                    A[x]++;
                    count++;
                }
            }
            else{
                countout++;
            }
        }
        int g = 0;
        int maxA = 0;
        for(int i = 1 ; i < A.length ; i++){
            if(A[i] > 0){
                g++;
            }
            if(A[i] > maxA){
                maxA = A[i];
            }
        }
        System.out.println(g);
        System.out.println(countout);
        System.out.println(count);
        for(int i = 1 ; i < A.length ; i++){
            if(maxA == A[i]){
                System.out.print(i+" ");
            }
        }
    }
    
}
