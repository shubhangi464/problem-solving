#include<stdio.h>
void mat(int a[100][100],int r,int c)
{
int i,j,k,b[100][100],t;
for(i=0;i<r;i++)
{
    for(j=0;j<c;j++)
    {
        b[i][j]=a[j][i];
    }
}
for(j=0;j<=r/2;j++)
{
    for(i=0;i<c;i++)
   {
t=b[j][i];
b[j][i]=b[r-1-j][i];
b[r-1-j][i]=t;
   }
}
for(i=0;i<r;i++)
{
for(j=0;j<c;j++)
printf("%d ",b[i][j]);
printf("\n");
}

}
void main(){
int a[100][100],r,c,i,j;
printf("no. of rows\n");
scanf("%d",&r);
printf("no. of column\n");
scanf("%d",&c);
printf("enter the elements\n");
for(i=0;i<r;i++)
{
for(j=0;j<c;j++){
scanf("%d",&a[i][j]);
}
printf("\n");
}

mat(a,r,c);


}