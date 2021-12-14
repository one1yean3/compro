import java.util.Scanner;
public class PPAP1 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        String str = sc.next();
        String god = "GOD";
        String ppap = "PPAP";
        int godF = str.indexOf(god);
        int godL = str.lastIndexOf(god);
        int ppapF = str.indexOf(ppap);
        int ppapL = str.lastIndexOf(ppap);
        int g = 0 ;
        if(ppapF == -1 && ppapL == -1){
            System.out.println("clean");
            g = 1;
        }
        else if(ppapF == -1 && ppapL == -1 && godF == -1 && godL == -1){
            System.out.println("clean");
            g = 1;
        }
        if(g != 1){
            if(ppapF>godF && ppapF<godL && ppapL>godF && ppapL<godL){
                System.out.println("safe");
            }
            else{
                System.out.println("danger");
            }
        }
    }
    //ABGODPPAPSSPPAPGODSFX 
}
