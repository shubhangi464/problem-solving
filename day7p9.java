import java.util.Scanner;

public class day7p9 {
    public static void main(String[] args) {
        String str;
    int i,f=0;
    System.out.println("enter the word");
Scanner sc= new Scanner(System.in);
   str= sc.nextLine();
   int len=str.length();
   StringBuffer st=new StringBuffer(str);
   st=st.reverse();
   for(i=0;i<len;i++)
   {
    System.out.println(st.substring(0,i+1));
   }
    }
}
