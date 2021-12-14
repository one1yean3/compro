import java.util.Scanner;

public class ArrayCompress1 {
    public static void main(String[] args) {
        Scanner scan = new Scanner(System.in);
        int N = scan.nextInt();
        int[] ar = new int[N+1];
        int[] ar2 = new int[N];
        for(int i = 1 ; i <= N ; i++){
            ar[i] = scan.nextInt();
        }
        int k = scan.nextInt();
        int count = 1;
        for(int i = 1 ; i <= N ; i++){
            if(k == ar[i]){
                ar2[count] = i ; 
                count++;
            }
        }
        count = 1;
        int sum=0;
        for(int i = 1 ; i < ar2[count] ; i++){
            sum += ar[i];
            if(i == ar2[count]-1 || i == N){
                System.out.print(sum+" ");
                System.out.print(ar[i+1]+" ");
                i++;
                sum=0;
                count++;
            }
        }
        sum=0;
        for(int i = ar2[count-1]+1 ; i <= N ; i++){
            sum += ar[i];
            if(i == N){
                System.out.println(sum);
            }
        }
    }
}
