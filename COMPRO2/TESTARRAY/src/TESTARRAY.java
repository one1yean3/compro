
import java.util.ArrayList;
import java.util.Scanner;

public class TESTARRAY {

    public static void main(String[] args) {
        Scanner scan = new Scanner(System.in);
        int[] a = new int[1000000];
        java.util.Arrays.fill(a, -1);
        
        for(int i=0;i<5;i++){
            System.out.println(a[i]);
        }
        
        boolean negative = false ;
        if(negative){
            System.out.println("There is a negative input");
        }
        
        String text1 = "Silpakorn";
        String text2 = " University";
        String Satit = text1.concat(text2);
        System.out.println(Satit);
                
        char c = '\u0E02';
        System.out.println(c);
        
        
        
        String text3 = "Silpakorn";
        char c3 = text3.charAt(8);
        System.out.println(c3);
        
        int sum = 0;
        boolean negativeFound = false;
       /* for(int i = 0; i < 10; ++i) {
        int x = scan.nextInt();
        sum += x;
        if(x < 0)
        negativeFound = true;
        }
        System.out.println(sum);
        if(negativeFound)
        System.out.println("Negative number was found");
        else
        System.out.println("No negative number");*/
       
        int[] x = new int[10];
        int[] y = new int[10];
        x = y;
        x[0] = 7;
        y[1] = 9;
        System.out.println(x[1]);
        System.out.println(y[0]);
        
        ArrayList<Integer> A = new ArrayList<>();
        A.add(5);
        A.add(2);
        A.add(4);
        A.add(1);
        A.add(3);
        for(int i = 0; i < A.size(); ++i) {
            System.out.println(A.get(i));
        }
    }
    
}
