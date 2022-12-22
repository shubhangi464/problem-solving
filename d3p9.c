#include<stdio.h>

void patt(int n){
 int i,j;
        for(i=1;i<=n;i++)
        {
            for(j=1;j<=i;j++)
            printf("*");
            printf(" ");
        }
    }
void main(){
    int n=3;
    patt(n);

}
