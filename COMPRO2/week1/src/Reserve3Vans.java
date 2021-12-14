
import java.util.Scanner;

/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/**
 *
 * @author Admin
 */
public class Reserve3Vans {

    /**
     * @param args the command line arguments
     */
    
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n =  sc.nextInt();
        int A=0,B=0,C=0;
        for(int i=0;i<n;i++){
            int x = sc.nextInt();
            if( A<=B && A<=C){
                System.out.println("A");
                A+=x;
            }
            else if(B<A && B<=C){
                System.out.println("B");
                B+=x;
            }
            else if(C<A && C<B){
                System.out.println("C");
                C+=x;
            }
        }
    }
    
}
