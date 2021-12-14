
import java.util.Scanner;
public class String1 {

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        String str = sc.nextLine();
        int x = sc.nextInt();
        int d = str.length();
        if(x-1>=0 && x-1<d){
            System.out.println(str.charAt(x-1));
        }
        else{
            System.out.println("invalid position");
        }
        
    }
    
}
