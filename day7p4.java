public class day7p4 {
   static int spaces(String str)
    { int count=0;
        char [] ch= str.toCharArray();
        for(char c: ch)
        {
            if(c==' ')
              count++;
        }
        return (count+1);
        
    }
   public static void main(String[] args) {

        String str="she is a great achiver. she has achived her goals";
        int c=spaces( str);
        System.out.println("no. of words are"+c);
    }
}
