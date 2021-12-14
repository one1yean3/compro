import java.util.Scanner;
public class Partition2 {
    public static void main(String[] args) {
        Scanner scan = new Scanner(System.in);
        int N = scan.nextInt();
        int[] ar = new int[N+1];
        int[] ar2 = new int[N];
        int x = 0;
        for(int i = 1 ; i <= N ; i++){
            ar[i] = scan.nextInt();
            if(i == (N/2)+1){
                x = ar[i];
            }
        }
        int count = 1;
        for(int i = 1 ; i <= N ; i++){
            if(ar[i] <= x){
                ar2[count] = ar[i];
                count++;
            }
        }
        x = ar2[((count-1)/2)+1];
        for(int i = 1 ; i < count ; i++){
            if(ar2[i] <= x){
                System.out.print(ar2[i]+" ");
            }
        }
        System.out.println("");
        for(int i = 1 ; i < count ; i++){
            if(ar2[i] > x){
                System.out.print(ar2[i]+" ");
            }
        }
    }
}
