import java.util.Scanner;
public class TrainCar {
    public static void main(String[] args) {
        Scanner scan = new Scanner(System.in);
        int C = scan.nextInt();
        int P = scan.nextInt();
        int[] ar = new int[C+P+1];
        int K = scan.nextInt();
        for(int i = 0 ; i < K  ; i++){
            int T = scan.nextInt();
            int index = scan.nextInt();
            int cap = scan.nextInt();
            if(T == 1 && index <= C){
                if(ar[index]+cap <= 50){
                    ar[index] += cap;
                }
            }
            else if (T == 2 && index > C){
                if(ar[index]+cap <= 60){
                    ar[index] += cap;
                }
            }
            for(int c = 1 ; c <= C+P ; c++){
                System.out.print(ar[c]+" ");
            }
            System.out.println("");
        }
    }
}