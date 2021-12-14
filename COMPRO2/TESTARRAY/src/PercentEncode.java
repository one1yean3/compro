import java.util.Scanner;
public class PercentEncode {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        String str = sc.next();
        String out = "";
        for (int i=0; i < str.length() ; i++){
            if( str.charAt(i) == ':'){
                out += "%3A";
            }
            else if( str.charAt(i) == '/'){
                out += "%2F";
            }
            else if( str.charAt(i) == '?'){
                out += "%3F";
            }
            else if( str.charAt(i) == '='){
                out += "%3D";
            }
            else{
                out += str.charAt(i);
            }
        }
        System.out.println(out);
        /*if (str.equals("x")){
            System.out.println("1");
        }*/
    }
}
    

