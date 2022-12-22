import java.util.Scanner;

public class day7p10 {
    
    public static void main(String[] args) {
        String str;
        int i,j,f=0,count=0;
        System.out.println("enter the word");
        Scanner sc= new Scanner(System.in);
        str= sc.nextLine();
        int len=str.length();
        char[]ch=str.toCharArray();
StringBuilder st=new StringBuilder(str);

        for(i=0;i<len;i++)
        {for(j=0;j<len;j++)
            { count=0;
             if(ch[i]==ch[j])
             {count++;
                st

             }
            }
            System.out.println
        }

    }
}
