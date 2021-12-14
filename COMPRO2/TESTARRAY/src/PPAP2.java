import java.util.Scanner;
public class PPAP2 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        String str = sc.next();
        String god = "GOD";
        String ppap = "PPAP";
        
        int godint = str.indexOf(god);
        int ppapint = str.indexOf(ppap);
        
        for(int i=ppapint ; i < godint ; i++){
            int y = str.indexOf(ppap, ppapint+1);
            if(y > godint){
                ppapint = str.indexOf(ppap, godint);
                godint = y;
            }
        }
        
        /*for(int i=ppapint ; i < godint ; i++){
            int y = str.indexOf(ppap, ppapint+1);
            if(y > godint){
                godint = y;
            }
        }*/
        
    }
    //ABPPAPXKPPAPAPPAPPPAPGODA 
}
