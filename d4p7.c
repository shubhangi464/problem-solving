#include<stdio.h>
int power(int a,int b){

    if(b>0)
      return (a*power(a,b-1)); 
    else
    return 1;

}
void main(){
int a,b;
printf("enter the value");
scanf("%d",&a);
scanf("%d",&b);
 int re=power(a,b);
 printf("%d",re);
}