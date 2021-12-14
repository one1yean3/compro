import java.util.Scanner;
public class Partition1 {
    public static void main(String[] args) {
        Scanner scan = new Scanner(System.in);
        int N = scan.nextInt();
        int[] ar = new int[N+1];
        int x = 0;
        for(int i = 1 ; i <= N ; i++){
            ar[i] = scan.nextInt();
            if(i == (N/2)+1){
                x = ar[i];
            }
        }
        for(int i = 1 ; i <= N ; i++){
            if(ar[i] <= x){
                System.out.print(ar[i]+" ");
            }
        }
        System.out.println("");
        for(int i = 1 ; i <= N ; i++){
            if(ar[i] > x){
                System.out.print(ar[i]+" ");
            }
        }
        
    }
    
}
