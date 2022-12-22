#include<stdio.h>
void main(){
int i,j,k;
for(i=0;i<4;i++)
{
 for(j=0;j<4;j++)
 {  
if(j<i)
printf (" ");
else
printf("*");
 }
 for(k=3;k>i;k--)
printf("*");
 printf("\n");
}
for(i=1;i<4;i++){
  for(j=0;j<4;j++)
 { if(j<(4-i-1)) 
 printf (" ");
else
printf("*");
 }  if(i!=0){
 for(k=0;k<=(i-1);k++)
printf("*");}
 printf("\n");
}

}