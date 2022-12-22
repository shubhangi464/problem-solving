public class day7p2 {
    static Boolean palindrom(String str)
    { String s;
      StringBuilder st= new StringBuilder(str);
     st=st.reverse();
     s=st.toString();
     if(s.compareTo(str)==0)
return true;
      return false;
   
    }
    public static void main(String[] args) {
      String st= "naman";
      boolean a=palindrom(st);
      System.out.println("the ans is "+a);
    }
}
