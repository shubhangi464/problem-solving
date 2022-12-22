#include<stdio.h>
void main()
{
    int a,b,c;
    printf("enter the 3 number");
    scanf("%d%d%d",&a,&b,&c);
    if (a>b&&a>c)
    printf("%d",a);
    else if(b>a&&b>c)
    printf("%d",b);
    else
    printf("%d",c);

}
