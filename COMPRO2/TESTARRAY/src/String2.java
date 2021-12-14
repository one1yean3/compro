import java.util.Scanner;
public class String2 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int max = 0;
        int c = 0;
        while(true){
            String str = sc.nextLine();
            int x = str.length();
            if( x == 0){
                break;
            }
            if ( x >= max ){
                if (x == max){
                    c++;
                }
                else{
                    c=1;
                }
                max = x;
            }
        }
        System.out.println(max+"\n"+c);
    }
}
