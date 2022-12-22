#include<stdio.h>
void perfect(int l,int h ){
    int i,j,k,s;
while(l<=h){
s=0;
    for(i=1;i<=(l/2);i++)
    {
        if(l%i==0)
        s=s+i;
    }
    if(s==l)
    printf("%d\n",l);
    l++;}
   
}
void main(){
    int l,h;
    printf("enter the limits\n");
    scanf("%d%d",&l,&h);
perfect(l,h);
}