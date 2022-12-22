import java.util.Scanner;

public class math1 {
static void num(int a,int  b,int  k){
    double d=Math.pow(10,(k));
     a= (int) (a%(d));
     int aa =(int) (a/(Math.pow(10, (k-1))));
aa=(int) Math.pow(aa, b);
System.out.println("ans"+aa);
System.out.println("ans"+d);
}

    public static void main(String[] args) {
        System.out.println("enter the no.");
        Scanner sc= new Scanner(System.in); 
         int a=sc.nextInt();
       int b=sc.nextInt();
        System.out.println("enter the kth digit");
        int k=sc.nextInt();
        num(a,b,k);
    }
}
