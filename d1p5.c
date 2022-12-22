#include<stdio.h>
void main(){
    float t;
    printf("enter the temperature(in centigrade)");
    scanf("%f",&t);
    if(t<=0)
    printf("freezing wheather");
else if(t>0&&t<10)
    printf("very cold wheather");
    else if(t>=10&&t<20)
    printf("cold weather");
    else if(t>=20&&t<30)
    printf("normal temperture");
    else if(t>=30&&t<40)
printf("its hot");
else
printf("its very hot");

}