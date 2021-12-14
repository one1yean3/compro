import java.util.Scanner;
public class HowLongestNoFunction {
    public static void main(String[] args) {
        Scanner scan = new Scanner(System.in);
        int N = scan.nextInt();
        int[] ar = new int[N+2];
        for(int i = 1 ; i <= N ; i++){
            ar[i] = scan.nextInt();
        }
        int max = 0;
        int count = 0;
        for(int i = 1 ; i <= N ; i++){
            if(ar[i] == 0){
                count = 0;
            }
            else{
                count++;
                if(count > max){
                    max = count;
                }
            }
        }
        System.out.println(max);
        count = 0;
        int d = max;
        for(int i = 1 ; i <= N+1 ; i++){
            if(ar[i] == 0){
                if(count == max){
                    System.out.print((i-d)+" ");
                }
                count = 0;
            }
            else{
                count++;
            }
        }
        
    }
    
}
