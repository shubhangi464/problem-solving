public class d6p3 {
     void magic(int m,int n,int a[100])
     { int sr,sc,sd;
        int i,j,k;
        for(i=0;i<n;i++)
        for(j=0;j<m;j++)
        {
        if(i==j)
        sd=sd+a[i][j];
      }
        for(i=0;i<m;i++)
        {sr=0;
        for(j=0;j<n;j++)
        sr=sr+a[i][j];
   if(sr!=sd)
   { printf("not a magic matric");
   break;}
}
   for(i=0;i<n;i++)
       {
         sc=0;
       for(j=0;j<m;j++)
    sc=sc+a[j][i];
    if(sc!=sd)
    { printf("not a magic matric");
    break;
   }
}


     }
}
