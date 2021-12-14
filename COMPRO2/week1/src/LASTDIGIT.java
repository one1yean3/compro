import java.util.Scanner;
public class LASTDIGIT {
    public static void main(String[] args){
        
        Scanner scan = new Scanner(System.in);
        int N = scan.nextInt();
        int K = scan.nextInt();
        int p1 = 0;
        int p2 = 0;
        for(int i=0;i<N;i++){
            int sex = scan.nextInt();
            int s1 = scan.nextInt();
            int s2 = scan.nextInt();
            
            if( s1>=9 || s2>=9 ){
                if(s1 >= 9 && s2 >= 9 ){
                    if(sex == 1){
                        if(p1 != K){
                            p1++;
                            System.out.println(i+1+" 1");
                        }
                        else if(p2 != K){
                            p2++;
                            System.out.println(i+1+" 2");
                        }
                     }
                    else if(sex == 2){
                        if(p2 != K){
                            p2++;
                            System.out.println(i+1+" 2");
                        }
                        else if(p1 != K){
                            p1++;
                            System.out.println(i+1+" 1");
                        }
                    }
                }
                else if(s1 >= 9){
                    if(p1 != K){
                        p1++;
                        System.out.println(i+1+" 1");
                    }
                }
                else if(s2 >=9){
                    if(p2 != K){
                        p2++;
                        System.out.println(i+1+" 2");
                    }
                } 
            }
        }
    }
}


