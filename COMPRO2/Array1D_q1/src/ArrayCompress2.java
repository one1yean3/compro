import java.util.Scanner;
public class ArrayCompress2 {
    public static void main(String[] args) {
        Scanner scan = new Scanner(System.in);
        int N = scan.nextInt();
        int[] ar = new int[500001];
        for(int i = 0 ; i < N ; i++){
            ar[i] = scan.nextInt();
        }
        int k = scan.nextInt();
        int q = scan.nextInt();
        int y = scan.nextInt();
        int sum=0;
        int check = 0;
        boolean check2 = false ;
        for(int i = 0 ; i < N ; i++){
            if(k == ar[i] || q == ar[i] || y == ar[i]){
                sum=0;
                if(check2 == false){
                    System.out.print(ar[i]+" ");
                    check2 = true;
                }
                
            }
            else{
                sum += ar[i];
                if(k == ar[i+1] || q == ar[i+1] || y == ar[i+1] || i+1 > N){
                    System.out.print(sum+" ");
                }
                check2 = false;
            }
            /*if(check == 1){
                System.out.print(ar[i]+" ");
            }*/
            
        }
        
    }
}
