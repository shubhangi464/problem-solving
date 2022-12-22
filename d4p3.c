 #include<stdio.h>
int fact(int n,int f){
    
    if(n==1)
    return f;
else
{f=f*n;
return(fact(n-1,f));  
}
}

 void main(){
 int ans= fact(5,1);
 printf("%d",ans);
 }