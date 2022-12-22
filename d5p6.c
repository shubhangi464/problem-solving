#include<stdio.h>
void arr(int a[],int l)
{int i,j;
    for(i=0;i<l/2;i++)
    { j=a[i];
    a[i]=a[l-1-i];
    a[l-1-i]=j;
    }
    for(i=0;i<l;i++)
    printf("%d ",a[i]);
}


void main(){
    int a[100],l,i;
printf("enter the size\n");
scanf("%d",&l);
printf("enter the value\n");
for(i=0;i<l;i++)
scanf("%d",&a[i]);
arr(a,l);
}