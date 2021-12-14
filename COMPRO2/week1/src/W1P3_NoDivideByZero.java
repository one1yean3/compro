
import java.util.Scanner;


public class W1P3_NoDivideByZero {

    /**
     * @param args the command line arguments
     */
    
    public static void main(String[] args) {
        
        Scanner inp = new Scanner(System.in);
        double x =  inp.nextDouble();
        double y =  inp.nextDouble();
        double z =  inp.nextDouble();
        if(z!=0){
            double result = (x+y)/z;
            System.out.println(String.format("%.6f",result));
        }
        else{
            System.out.println("cannot divide by zero");
        }
        
        
    }
    
}
