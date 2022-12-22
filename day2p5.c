#include<stdio.h>
void main(){
    int i,j,k;
    for(i=5;i<=1;i--)
    {k=i;
        for(j=5;j>=i;j--)
        {
            printf("%c",(char)(65+k));
            k++;
        }
        printf("\n");}}

   