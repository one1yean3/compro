import java.util.Scanner;
public class TeamCompetition {
    public static void main(String[] args) {
        Scanner scan = new Scanner(System.in);
        int N = scan.nextInt();
        int[] A = new int[N];
        int[] B = new int[N];
        for(int c = 0 ; c < N ; c++){
            A[c] = scan.nextInt();
        }
        for(int c = 0 ; c < N ; c++){
            B[c] = scan.nextInt();
        }
        int sA = 0;
        int sB = 0;
        for(int i = 0 ; i < N ; i++){
            if(A[i] > B[i]){
                sA += 2;
            }
            else if(A[i] < B[i]){
                sB += 2;
            }
            else{
                sA += 1;
                sB += 1;
            }
        }
        if(sA > sB){
            System.out.println("Team 1 wins");
            System.out.println("Score "+sA+" to "+sB);
        }
        else if(sA < sB){
            System.out.println("Team 2 wins");
            System.out.println("Score "+sB+" to "+sA);
        }
        else{
            System.out.println("Draw game");
            System.out.println("Score "+sA+" to "+sB);
        }
        
    }
    
}
