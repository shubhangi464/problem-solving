public class day7p5 {
    
     static void caseconversion( String str)
     { String s="";
     String st;
       char[] ch= str.toCharArray();
       for(char c:ch){
        if((int)c >= 97 &&(int)c<= 122)
        {
             st=Character.toString(c);
         s=s+st.toUpperCase(); 
       }
       else if((int)c >= 65 &&(int)c<= 90){
        st=Character.toString(c);
        s=s+st.toLowerCase(); 
       }
       else
       {
        s=s+c;
       }
    }
    System.out.println("Output  "+s);

     }
     public static void main(String[] args) {
        String str="ShuBhanGI";
        caseconversion(str);
     }
}
