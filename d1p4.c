#include<stdio.h>
void main(){
    int a,b,c;
   printf("enter the side of triangle");
   scanf("%d%d%d",&a,&b,&c);
   if (a==b&&b==c)
   printf("equilateral triangle");
   else if((a==b&&b!=c)||(a==c&&b!=c)||(c==b&&a!=c))
   printf("isoceles triangle");
   else
   printf("scaler triangle");

}