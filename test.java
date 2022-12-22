public class test {
    static int  check(int i)
    {int c=0;
        for(int j=1;j<i;j++)
    {
        if(i%j==0)
        c++;
    }
    return c;
    }
    static long maxSumLCM(int n) {
        // code here
        int i,sum=0;
        for(i=1;i<n;i++)
        {
            if(n%i==0)
            {int c= check(i);
            if(c==2)
            sum=sum+i;
            }
        }
        return (int)sum;
    }
    public static void main(String[] args) {
        maxSumLCM(5);
    }
}

