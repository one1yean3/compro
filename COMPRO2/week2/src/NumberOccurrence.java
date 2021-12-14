import java.util.Scanner;
public class NumberOccurrence {
    public static void main(String[] args) {
        Scanner scan = new Scanner(System.in);
        int N = scan.nextInt();
        int[] A = new int[N+1];
        for(int i = 1 ; i <= N ;i++){
            A[i] = scan.nextInt();
        }
        int x = scan.nextInt();
        boolean negative = false;
        for(int i = 1 ; i <= N ;i++){
            if(x == A[i]){
                System.out.print(i+" ");
                negative = true;
            }
        }
        if(!negative){
            System.out.print("0");
        }
        //System.out.print(??);
        
        
    }
    
}
