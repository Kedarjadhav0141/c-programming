#include<stdio.h>
int main(){
    int a,b;
    printf("Enter two numbers");
    scanf("%d%d",&a,&b);

    if(a>b)
    printf("Greater is %d", a);
    else
    printf("Greater is %d",b);

    return 0;
}