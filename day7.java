import java.util.Scanner;

public class day7 {
    public static void main(String[] args) {
        int count=0;
    int i,j,k;
    String name;
    System.out.println("enter the name");
    Scanner sc= new Scanner(System.in);
        name=sc.nextLine();
  char[] ch= name.toCharArray();
  for(char c:ch)
  count++;
    System.out.println("length is:");
  System.out.println(count);
    }
}
