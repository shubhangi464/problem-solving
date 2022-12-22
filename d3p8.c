 #include<stdio.h>
 int ser(int n){
int s=0,i,j;
for(i=1;i<=n;i++)
s=s+(i*(i+1)*(i+2));
return s;
 }
 void main(){
  int n=2;
  int ans=ser(n);
  printf("%d",ans);
 }