
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
public class OperSelect {

    /**
     * @param args the command line arguments
     */
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
            int x = sc.nextInt();
            int y = sc.nextInt();
            int z = sc.nextInt();
            if(z == 1){
                System.out.println(x+y);
            }
            else if(z==2){
                System.out.println(x-y);
            }
            else if(z==3){
                System.out.println(x*y);
            }
            else if(z==4||z==5){
                if(y==0){
                    System.out.println("cannot divide by zero");
                }
                else if(z==5){
                    System.out.println(x%y);
                }
                else if(z==4){
                    System.out.println(x/y);
                }
            }
    }
}
