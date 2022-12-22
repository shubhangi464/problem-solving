public class test3 {
    
        public static int trailingZeroes(int n) {
            Biginteger f=1;
            int i;
            int c=0;
             for(i=1;i<=n;i++)
             f=f*i;
    while(f%10==0)
          {
              c++;
              f=f/10;
          } 
          return c;  
        }
public static void main(String[] args) {
    int n=30;
    long c=trailingZeroes(n);
      System.out.println(c);
}




    }

