#include<stdio.h>
void main(){
int i,j,k;
for(i=1;i<=5;i++)
{k=i;
    for(j=1;j<=10;j++){
if(j>i&&j<=10-i)
printf(" ");
else if(j<=i)
printf("%d",j);
else{
printf("%d",k);
k--;
}
}
printf("\n");
}

}