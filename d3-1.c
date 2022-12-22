#include<stdio.h>
void main(){
int i,n,sum=0,f;
printf("enter the number of terms\n");
scanf("%d\n",&n);
while(n>0)
{f=1;
    for(i=1;i<=n;i++)
    {
        f=f*i;
    }
    sum=sum+f;
    n--;
}
printf("sum is %d",sum);

}