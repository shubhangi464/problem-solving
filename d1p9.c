#include<stdio.h>
void main(){
// reference date is 01/01/2010
int d,m,y,diff,n=0,dm,mn=0,td;
printf("enter the date after 01/01/2010");
scanf("%d/%d/%d",&d,&m,&y);
diff=(y-2010)*365;
while(y>=2010){
if((y%4==0)&&(y%100!=0)||(y%400==0))
n++;
y--;
}
while(m>1&&m<13){
    if(m==1||m==3||m==5||m==7||m==8||m==10||m==12)
    mn=mn+31;
   else if(m==4||m==6||m==9||m==11)
    mn=mn+30;
else 
{
if((y%4==0)&&(y%100!=0)||(y%400==0))
mn=mn+29;
else
mn=mn+28;    
}
 m--;     
}
td=diff+d+mn+n;


}