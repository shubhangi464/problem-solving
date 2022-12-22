#include<stdio.h>
double ser(double n)
{ 
    double s=1,f;
int i,j,k=2;
for(i=1;i<=n+2;i+=2){
    f=1;
    for(j=1;j<=i;j++){
    f=f*j;}
    if((k%2)!=0)
  s=s+(k/f);
    else
      s=s-(k/f);
    k++;
}
return s;
}
void main(){
    double n=9,x=1;
  double ans = ser(n);
  printf("%lf",ans);}