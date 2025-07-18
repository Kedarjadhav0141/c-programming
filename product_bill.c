#include<stdio.h>
int main(){
    int id1,id2,id3,qt1,qt2,qt3,dis;
    char n1[50],n2[50],n3[50];
    float p1,p2,p3,tot,tpay,disamt,payamt;
    FILE *fp;
    fp = fopen("Bill.txt","w");

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

    fprintf(fp,"\n------------------PAYMENT_DESCRIPTION---------------------------------------------");
    fprintf(fp,"\n\033[31m|ID     |NAME                   |PRICE             |QUANTITY      |    TOTAL     |\033[0m");
    fprintf(fp,"\n----------------------------------------------------------------------------------");
    fprintf(fp,"\n|%7d|%23s|%18.2f|%14d|%14.2f|",id1,n1,p1,qt1,(p1*qt1));
    fprintf(fp,"\n----------------------------------------------------------------------------------");
    fprintf(fp,"\n|%7d|%23s|%18.2f|%14d|%14.2f|",id2,n2,p2,qt2,(p2*qt2));
    fprintf(fp,"\n----------------------------------------------------------------------------------");
    fprintf(fp,"\n|%7d|%23s|%18.2f|%14d|%14.2f|",id3,n3,p3,qt3,(p3*qt3));
    fprintf(fp,"\n----------------------------------------------------------------------------------");
    fprintf(fp,"\n\t\t\t\t\t\t   Total              : %.2f",tot);
    fprintf(fp,"\n\t\t\t\t\t\t\tDiscount Amount :%.2f",disamt);
    fprintf(fp,"\n\t\t\t\t\t\t\tAmount To Pay  : %.2f",tpay);
}