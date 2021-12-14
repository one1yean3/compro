import java.util.Scanner;
public class ArrayJump1 {
    public static void main(String[] args) {
        Scanner scan = new Scanner(System.in);
        int N = scan.nextInt();
        int[] ar = new int[N+1];
        for(int i = 1 ; i <= N ; i++){
            ar[i] = scan.nextInt();
        }
        int count = 0;
        for(int i = 1 ; i <= N ; i+=ar[i]){
            if(count < 5){
                System.out.println(i+" "+ar[i]);
                count++;
            }
        }
        if(count < 5){
            System.out.println("out of bounds");
        }
    }
    
}
