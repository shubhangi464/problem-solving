import java.util.Scanner;

public class day7p7 {
    
    public static void main(String[] args) {
        String str,st;
        int i,f=0;
        System.out.println("enter the sentence");
   Scanner sc= new Scanner(System.in);
       str= sc.nextLine();
    st=sc.nextLine();
     char []ch1=str.toCharArray();
     char []ch2=st.toCharArray();
     int len=str.length();
    int len1=st.length();
    if(len==len1)
    { for(i=0;i<len;i++)
     {
        if(ch1[i]!=ch2[i])
          f=1;
     }}
if(f==1)
System.out.println("not equal");
else
System.out.println("equal");

    }

}
