import java.util.Scanner;
public class PercentDecode {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        String str = sc.next();
        String out = "";
        for(int i=0 ; i < str.length() ; i++ ){
            if( str.charAt(i) == '%' ){
                if( str.charAt(i+1) == '3' ){
                    if ( str.charAt(i+2) == 'A' ){
                        out += ";";
                    }
                    else if ( str.charAt(i+2) == 'D' ){
                        out += "=";
                    }
                    else if ( str.charAt(i+2) == 'F' ){
                        out += "?";
                    }
                }
                else{
                    out += "/";
                }
                i+=2;
            }
            else{
                out += str.charAt(i);
            }
        }
        System.out.println(out);
    }
}
