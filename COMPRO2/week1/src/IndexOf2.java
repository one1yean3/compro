import java.util.Scanner;
public class IndexOf2 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        String str = sc.nextLine();
        String x = sc.next();
        int max=0;
        for(int i=0;i<str.length();i++){
            if(str.indexOf(x,i)+1>max){
                System.out.println(str.indexOf(x,i)+1);
                max = str.indexOf(x,i)+1;
            }
        }
        if(max==0){
            System.out.println("string not found");
        }
    }
}
