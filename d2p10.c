#include<stdio.h>

int re(int a,int s,int n){
if(n==16)
return;

 else if(s>0){
    s=s-5;
    printf("%d",a);
    return(a-5,s,n);
}
else if(s<=0){
n=a+5;
    printf("%d",a);
    return (a+5,s,n);
}

}
void main()
{
int a=16;
int s=16;
int n=0;
re(a,s,n);
}