import java.util.Scanner;
public class ArrayOcc2 {
    public static void main(String[] args) {
        Scanner scan = new Scanner(System.in);
        int N = scan.nextInt();
        int[] A = new int[N+1];
        int max = N;
        int K = scan.nextInt();
        for(int i = 0 ; i < K ; i++){
            int x = scan.nextInt();
            if(x >= 1 && x <= max){
                if(A[x] < 1){
                    A[x]++;
                }
            }
        }
        int[] B = new int[N+1];
        int maxA = 0;
        int count = 0;
        int c = 0;
        for(int i = 1 ; i < A.length ; i++){
            if(A[i] == 0){
                count++;
                B[i]=count;
                if(count == 1){
                   c++;
                }
            }
            else{
                count = 0;
            }
            if(count > maxA){
                maxA = count;
            }
        }
        System.out.println(maxA);
        
        for(int i = 1 ; i < A.length ; i++){
            if(B[i] == maxA){
                System.out.print(i+" ");
            }
        }
        
        
        /*for(int i = 0 ; i < c ; i++){
            System.out.print(B[i]+(maxA-1)+" ");
        }*/
        
        
        
    }
    
}
