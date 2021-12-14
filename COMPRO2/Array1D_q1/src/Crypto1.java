import java.util.Scanner;

public class Crypto1 {
    public static void main(String[] args) {
        Scanner scan = new Scanner(System.in);
        int N = scan.nextInt();
        int[] A = new int[N];
        for(int i = 0 ; i < N ; i++){
            A[i] = scan.nextInt();
        }
        int index = scan.nextInt();
        int key = scan.nextInt();
        boolean negative = false;
        if(A[index] + key <= 51743 || A[index+1] - key > 7832){
            System.out.println("pass");
        }
        else{
            System.out.println("fail");
            negative = true;
        }
        if(A[index+2] - key < 2394 || A[index+3] + key > 9213){
            System.out.println("pass");
        }
        else{
            System.out.println("fail");
            negative = true;
        }
        if(negative){
            System.out.println("fail");
        }
        else{
            System.out.println("pass");
        }
        
		// I hope you remember operators && ||
		//System.out.println("pass");
    }
}
