import java.util.Scanner;
public class IndexOf {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        String str = sc.nextLine();
        String x = sc.next();
        if( str.indexOf(x)+1 == 0 ){
            System.out.println("string not found");
        }
        else{
            System.out.println(str.indexOf(x)+1);
        }
    }
}
