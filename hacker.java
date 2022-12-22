import java.util.Scanner;

public class hacker {
    static double height(double a,double b)
    { 
        double c=2*(a/b);
        double h = Math.ceil(c);
        return h;
    }
    public static void main(String args[]){
        System.out.println("enter the area and length of base of triangle");
        Scanner sc= new Scanner(System.in);
        double a=sc.nextDouble();
        double b= sc.nextDouble();
        double h=height(a,b);
        System.out.println(h);
    }
}
