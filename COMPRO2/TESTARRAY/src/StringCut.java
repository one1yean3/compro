import java.util.Scanner;
public class StringCut {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        String str = sc.nextLine();
        String x = sc.next();
        String cut[] = str.split(x);
        int c = 1;
        if(cut.length != 1){
            for(int i = 0 ; i < cut.length ; i++ ){
                if( cut[i].length() != 0 ){
                    System.out.println(cut[i]);
                    c = 0;
                }
            }
            if(c != 0){
                System.out.println("no output");
            }
        }
        else if(cut.length == 1){
            System.out.println("no target character found");
        }
        
            
            
        /*for(String d : cut){
            if( d.length() != 0 ){
                System.out.println(d);
            }
            
        }*/
            
        
        
        
        
        /*
        int y = 0;
        for(int i = 0 ; i < str.length() ; i++ ){
            if(x.charAt(0) == str.charAt(i)){
                System.out.println(str.substring(y,i));
                y = i+1;
            }
        }
         
        System.out.println(str.substring(y,str.length()));*/
        
     
    }
    
}
