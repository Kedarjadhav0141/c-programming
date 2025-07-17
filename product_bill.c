#include<stdio.h>
int main(){
    int id1,id2,id3,qt1,qt2,qt3,dis;
    char n1[50],n2[50],n3[50];
    float p1,p2,p3,tot,tpay,disamt,payamt;

    printf("Enter product 1 Id : ");
    scanf("%d",&id1);
    printf("Enter product 1 name : ");
    scanf("%s",&n1);
    printf("Enter product 1 price : ");
    scanf("%f",&p1);
    printf("Enter product 1 Quantity  : ");
    scanf("%d",&qt1);

    printf("Enter product 2 Id : ");
    scanf("%d",&id2);
    printf("Enter product 2 name  : ");
    scanf("%s",&n2);
    printf("Enter product 2 price : ");
    scanf("%f",&p2);
    printf("Enter product 2 Quantity : ");
    scanf("%d",&qt2);

    printf("Enter product 3 Id : ");
    scanf("%d",&id3);
    printf("Enter product 3 name : ");
    scanf("%s",&n3);
    printf("Enter product price 3 : ");
    scanf("%f",&p3);
    printf("Enter product 3 Quantity : ");
    scanf("%d",&qt3);

    tot = (p1*qt1)+(p2*qt2)+(p3*qt3);

    if(tot>=100000)
    dis = 10;
    else if(tot>=80000)
    dis = 8;
    else if(tot>=50000)
    dis = 5;
    else if(tot>=30000)
    dis = 2;
    else
    dis =0;

    disamt=(tot*dis)/100;
    tpay=tot-disamt;

    printf("\n------------------PAYMENT_DESCRIPTION------------------");
    printf("\nProduct 1 id                    : %d",id1);
    printf("\nProduct 1 name                  : %s",n1);
    printf("\nProduct 1 quantity              : %d",qt1);
    printf("\nProduct 1 price                 : %f",p1);
    printf("\nProduct 2 id                    : %d",id2);
    printf("\nProduct 2 name                  : %s",n2);
    printf("\nProduct 2 quantity              : %d",qt2);
    printf("\nProduct 2 price                 : %f",p2);
    printf("\nProduct 3 id                    : %d",id3);
    printf("\nProduct 3 name                  : %s",n3);
    printf("\nProduct 3 quantity              : %d",qt3);
    printf("\nProduct 3 price                 : %f",p3);
    printf("\nTotal Amount                    : %f",tot);
    printf("\nDiscount Amt                    : %f",disamt);
    printf("\nAmount To Pay After Discount    : %f",tpay);

}