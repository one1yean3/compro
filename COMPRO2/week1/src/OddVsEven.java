
import java.util.Scanner;

public class OddVsEven {
    public static void main(String[] args) {
        int even = 0;
        int odd = 0;
        Scanner sc = new Scanner(System.in);
        for(int i=0;i<8;i++){
            int x = sc.nextInt();
            if( x%2==0){
                even+=x;
            }
            else{
                odd+=x;
            }
        }
        if(even > odd){
            System.out.println("even\n"+even+"\n"+odd);
        }
        else if(even<odd){
            System.out.println("odd\n"+even+"\n"+odd);
        }
        else{
            System.out.println("equal\n"+even+"\n"+odd);
        }
    }
}
