#include<stdio.h>

int sum(int n){
    int s=0;
    int i,j,f=1;
    for(i=1;i<=n;i++){
    for(j=1;j<=i;j++)
    {f=f*j;
    }
    s=s+(f/i);
    }
    return s;
}
void main(){
int ans=sum(3);
printf("the ans is\n");
printf("%d",ans);

}