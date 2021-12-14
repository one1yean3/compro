import java.util.Scanner;
public class Box2 {
    static void Box1(final int Q,final int B,int[] A,int[] Ar){
        if(Ar[B]+Q <= A[B]){
            Ar[B]+=Q;
            System.out.println(Ar[B]);
        }
        else{
            System.out.println("-1");
        }
//        for(int i = 1 ; i < A.length ; i++){
//            System.out.print(Ar[i]+" ");
//        }
//        System.out.println("");
    }
    static void Box2(int Q,int[] A,int[] Ar){
        int remain = Q ;
        int last = 0;
        for(int i = 1 ; i < A.length ; i++){
            if(remain > Ar[i] && Ar[i] != 0){
                Q = remain -  Ar[i];
                Ar[i] -= remain;
                if(Ar[i]<0){
                    Ar[i]=0;
                }
                remain = Q ;
                last = i;
            }
            if(Ar[i] > remain){
                Q = remain - Ar[i];
                if(Q<0){
                    Q = 0 ;
                }
                Ar[i] = Ar[i] - remain;
                remain = Q;
                last = i;
            }
            if(remain == 0){
                System.out.println(i+" "+Ar[i]);
                break;
            }
            if(i == A.length-1 ){
                System.out.println(i+" 0");
            }
        }
//        for(int i = 1 ; i < A.length ; i++){
//            System.out.print(Ar[i]+" ");
//        }
//        System.out.println("");
        
        
    }
    public static void main(String[] args) {
        Scanner scan = new Scanner(System.in);
        int N = scan.nextInt();
        int[] A = new int[N+1];
        int[] Ar= new int[N+1];
        for(int i = 1 ; i <= N ; i++){
            A[i] = scan.nextInt();
        }
        int K = scan.nextInt();
        for(int i = 0 ; i < K ; i++){
            final int check = scan.nextInt();
            if(check == 1){
                final int Q = scan.nextInt();
                final int B = scan.nextInt();
                Box1(Q,B,A,Ar);
            }
            else if(check == 2){
                int Q = scan.nextInt();
                Box2(Q,A,Ar);
            }

        }
    }
}
//6
//5 3 2 4 1 4
//9
//1 3 4
//1 2 4
//1 1 4
//1 2 2
//1 2 3
//2 3 
//2 3
//1 2 2
//2 5