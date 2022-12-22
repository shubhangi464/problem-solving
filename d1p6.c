#include<stdio.h>
void main(){
    int a,b;
    printf("enter the coordinate value");
    scanf("%d%d",&a,&b);
    if (a>0&&b>0)
    printf("frist quadrant");
    else if (a<0&&b>0)
    printf("second quadrant");
    else if (a<0&&b<0)
    printf("third quadrant");
    else 
    printf("fourth quadrant");
    
    
    
}