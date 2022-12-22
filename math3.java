import java.util.Scanner;

public class math3 {
    static void balance( String str)
    {int i,sum1=0,sum2=0;
       int len= (str.length())/2;
       for(i=0;i<len;i++)
       {
         sum1= sum1+ (int)str.charAt(i)-48;
       }
       for(i=len+1;i<str.length();i++)
       {
         sum2= sum2+ (int)str.charAt(i)-48;
       }
       if(sum1==sum2)
       System.out.println("balanced number");
       else
       System.out.println(" not a balanced number");

    }
    public static void main(String[] args) {
       String str;
       System.out.println("enter a string");
        Scanner sc= new Scanner(System.in);
        str= sc.nextLine();
        balance(str);

    }
}
