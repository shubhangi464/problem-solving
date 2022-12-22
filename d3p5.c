#include<stdio.h>
#include<math.h>
double series(double n,double x)
{double s=1,f;
int i,j;
for(i=1;i<=n;i++){
    f=1;
    for(j=1;j<=i;j++)
    f=f*j;
    
    s=s+(pow(x,i)/f);
}
return s;}

void main()
{double n,x;
double ans;
    printf("enter the value of n and x\n");
    scanf("%lf%lf",&n,&x);

    ans= series(n,x);
    printf("the value is %lf\n",ans);
}
