#include<stdio.h>
int arr(int n)
{int i,j,a[100],k=0;
for(i=1;i<=n;i++)
{
    if(i%2!=0)
    {
        a[k]=i;
        k++;

    }
}
for(i=n;i>=0;i--)
{
    if(i%2==0)
    {
        a[k]=i;
        k++;
    }
}
for(i=0;i<k;i++)
printf("%d",a[i]);
}
void main(){
    int a[100],n,i;
    printf("ener the size\n");
    scanf("%d",&n);
arr(n);
}