import java.util.Scanner;
public class Lease2 {
    public static void main(String[] args) {
        Scanner scan = new Scanner(System.in);
        int N = scan.nextInt();
        int[] ar = new int[N+1];
        for(int i = 1 ; i <= N ; i++){
            ar[i] = scan.nextInt();
        }
        int year = scan.nextInt();
        for(int i = 1 ; i <= N ; i++){
            ar[i] = year +(ar[i]);
        }
        int amountofy = scan.nextInt();
        boolean check = false;
        for(int i = 0 ; i < amountofy ; i++){
            int target = scan.nextInt();
            for(int d = 1 ; d <= N ; d++){
                if(target >= ar[d]){
                    System.out.print(d+" ");
                    check = true;
                }
            }
            if(!check){
                System.out.print("full");
            }
            System.out.println("");
            check = false;
        }
    }
}

