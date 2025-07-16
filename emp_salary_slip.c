#include<stdio.h>
int main(){
    float bs,da,hra,tx,totalsalary;

    printf("Enter basic salary");
    scanf("%f",&bs);
    printf("Enter DA(%%)");
    scanf("%f",&da);
    printf("Enter HRA(%%)");
    scanf("%f",&hra);
    printf("Enter TAX(%%)");
    scanf("%f",&tx);

    totalsalary = bs+((bs*(da+hra-tx))/100);
    printf("Total salary is : %f ",totalsalary);

    return 0;
}