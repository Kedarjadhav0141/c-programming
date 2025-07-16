#include<stdio.h>
int main(){
    int a,b,c;
    printf("Enter three Numbers : ");
    scanf("%d%d%d", &a,&b,&c);

    if(a>=b && a>c)
    printf("Greater is %d", a);
    else if(b>a && b>c)
    printf("Greater is %d",b);
    else
    printf("Greater is %d",c);

    return 0;
}