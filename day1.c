#include<stdio.h>1
void main(){
    int bs;
    int hra,da,pf,all;
    int g; 

printf("enter the basic salary ");
scanf("%d",&bs);
printf("enter the  grade");
scanf("%d",&g);
hra=0.2*bs;
da=0.5*bs;
pf=1.1*bs;
if(g==1){
    all= 1700 +bs+hra+da-pf;
printf("totalsalary=%d",all);
}
 else if(g==2){
    all=1500+bs+hra+da-pf;
printf("totalsalary=%d",all);
}
else if(g==3 ){
    all=1300+bs+hra+da-pf;
printf("totalsalary=%d",all);
}
else{
    printf("wrong value");
}

}

