import java.util.Scanner;

public class Lease1 {
    public static void main(String[] args) {
        Scanner scan = new Scanner(System.in);
        int N = scan.nextInt();
        int[] ar = new int[N];
        for(int i = 0 ; i < N ; i++){
            ar[i] = scan.nextInt();
        }
        int year = scan.nextInt();
        for(int i = 0 ; i < N ; i++){
            System.out.print(year +(ar[i]-1)+" ");
        }
        
    }
}
