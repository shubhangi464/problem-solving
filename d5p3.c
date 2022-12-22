#include<stdio.h>
void arr(int a[], int n)
{int l,h,i,j,s1=0,s2=0,m;
    if(n%2==0)
    {
l=n/2;
h=n/2;
    }
    else{
        l=(n+1)/2;
        h=n-l; 
    }
for(i=0;i<l;i++)
s1=s1+a[i];
for(i=l;i<n;i++)
s2=s2+a[i];
m=s1*s2;
printf("%d ",m);
}
void main(){
int a[100],l,i;
printf("enter the size\n");
scanf("%d",&l);
for(i=0;i<l;i++)
scanf("%d",&a[i]);
arr(a,l);

}