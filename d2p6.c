#include<stdio.h>
void main(){
int i,j,k;
for(i=0;i<4;i++)
{
    for(j=0;j<4;j++)
    {
       if(j<(3-i)) 
       printf(" ");
       else 
       printf("*");
    }
    for(k=0;k<i;k++)
    printf("*");
    
    printf("\n");
}

}