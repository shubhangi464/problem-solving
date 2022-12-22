import java.util.Scanner;
public class math {
static int sd(int num)
{int sum=0;
   while(num>0)
   {
    int a= num%10;
    sum=sum+a;
    num=num/10;
   }
   return sum;  
}
    public static void main(String[] args) {
        System.out.println("enter the number");
        Scanner sc= new Scanner(System.in); 
        int a=sc.nextInt();
        while(a>9)
       a=sd(a);
       System.out.println("sum is "+ a);
    }
}
