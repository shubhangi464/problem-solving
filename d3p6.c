#include<stdio.h>
#include<math.h>
double ser(double n,double x)
{ 
    double s=0,f;
int i,j,k=1;
for(i=1;i<=n;i+=2){
    f=1;
    for(j=1;j<=i;j++){
    f=f*j;}
    if((k%2)!=0)
   { s=s+(pow(x,i)/f);}
    else
       { s=s-(pow(x,i)/f);}
    k++;
}
return s;
}
void main(){
    double n=3,x=1;
  double ans = ser(n,x);
  printf("%lf",ans);
}