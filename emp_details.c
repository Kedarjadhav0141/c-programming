#include<stdio.h>
int main(){
    int id;
    char name[100];
    float bs,da,hra,tx=0,tsal;

    printf("Enter Employee Id :");
    scanf("%d",&id);
    printf("Enter Name :");
    scanf("%s",&name);
    printf("Enter Basic Salary in :");
    scanf("%f",&bs);
    printf("Enter DA in %%:");
    scanf("%f",&da);
    printf("Enter HRA in %%:");
    scanf("%f",&hra);

    if(bs>=100000)
    tx = 0.20*bs;
    else if(bs>=80000)
    tx = 0.15*bs;
    else if(bs>=50000)
    tx = 0.10*bs;
    else if(bs>=30000)
    tx = 0.05*bs;
    else
    tx = 0.0*bs;

    tsal = bs+((bs*(da+hra-tx))/100);

    printf("Total salary is %.2f\n ",tsal);
}