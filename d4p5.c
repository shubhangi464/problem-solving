
#include<stdio.h>
void hcf(int a, int b){
    int min=(a<b)?a:b;
    int i,h=1;
    for(i=1;i<=min;i++)
    {
        if(a%i==0&&b%i==0)
h=i;
    }
    printf("%d\n",h);
}
void main(){
int a,b;
printf("enter the 2 numbers\n");
scanf("%d%d",&a,&b);
hcf(a,b);
}