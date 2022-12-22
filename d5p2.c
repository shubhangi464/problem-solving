#include<stdio.h>
int chocolate (int a[],int n){
    int i,j,max=a[0];
for(i=0;i<n;i++)
{
    if(a[i]>max)
    max=a[i];
}
return max;
}
void main(){
int n,a[100],i,ans;
scanf("%d",&n);
for(i=0;i<n;i++)
scanf("%d",&a[i]);
printf("the ans is");
ans=chocolate(a,n);
printf("%d",ans);
}