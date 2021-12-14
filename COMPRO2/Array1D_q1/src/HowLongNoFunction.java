import java.util.Scanner;
public class HowLongNoFunction {
    public static void main(String[] args) {
        Scanner scan = new Scanner(System.in);
        int N = scan.nextInt();
        int[] ar = new int[N+1];
        for(int i = 1 ; i <= N ; i++){
            ar[i] = scan.nextInt();
        }
        for(int c = 0 ; c < 3 ; c++){
            int index = scan.nextInt();
            int count = 1;
            if(ar[index] == 1){
//                for(int i = index-1 ; i >= 1 ; i--){
//                    if(ar[i] == 0){
//                        break;
//                    }
//                    else{
//                        count++;
//                    }
//                }
                for(int i = index+1 ; i <= N ; i++){
                    if(ar[i] == 0){
                        break;
                    }
                    else{
                        count++;
                    }
                }
                System.out.println(count);
            }
            else{
                System.out.println("0");
            }
        } 

    }
    
}
