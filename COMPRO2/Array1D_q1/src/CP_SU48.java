import java.util.Scanner;
public class CP_SU48 {
    public static void main(String[] args) {
        Scanner scan = new Scanner(System.in);
        int N = scan.nextInt();
        int[] studentEarly = new int[N+1];
        int[] studentLate = new int[N+1];
        int K1 = scan.nextInt();
        int K2 = scan.nextInt();
        int P = scan.nextInt();
        for(int i = 0 ; i < P ; i++){
            int R = scan.nextInt();
            int S = scan.nextInt();
            if(S == 1){
                if(studentEarly[R] < K1){
                    studentEarly[R]++;
                    System.out.println("1");
                }
                else if(studentEarly[R] == K1){
                    if(studentLate[R] < K2){
                        studentLate[R]++;   
                        System.out.println("2");
                    }
                    else if(studentLate[R] == K2){
                        System.out.println("0");
                    }
                }
            }
            if(S == 2){ 
                if(studentLate[R] < K2){
                    studentLate[R]++;   
                    System.out.println("2");
                }
                else if(studentLate[R] == K2){
                    if(studentEarly[R] < K1){
                        studentEarly[R]++;
                        System.out.println("1");
                    }
                    else if(studentEarly[R] == K1){
                        System.out.println("0");
                    }
                }
            }
        }
        for(int i = 1 ; i <= N ; i++){
            System.out.print(studentEarly[i]+" ");
        }
        System.out.println("");
        for(int i = 1 ; i <= N ; i++){
            System.out.print(studentLate[i]+" ");
        }
        System.out.println("");
    }
    
}
