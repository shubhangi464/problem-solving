import java.util.Scanner;
public class math4 {
    
 static int prim(int n)
{int i,c=0;
    for(i=1;i<=n;i++)
    {
        if(n%i==0)
        c++;
    }
    if(c==2)
    return 1;
    else
    return 0;
}
     static void primfactor(int num)
    {int i,c;
        for(i=2;i<=num;i++)
        {
            if(num%i==0)
            {
                c=prim(i);
                if(c==1)
                {System.out.println(i);
                    break;
                }
            }
        }
    } 
public static void main(String[] args) {
    int i;
    System.out.println("enter the range");
    Scanner sc=new Scanner(System.in);
    int num=sc.nextInt();
    System.out.println("1");
    for(i=2;i<=num;i++)
    primfactor(i);

}
}
