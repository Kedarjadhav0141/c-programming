#include<stdio.h>
int main(){
    int a,b,c;
    printf("Enter two numbers");
    scanf("%d%d", &a,&b);
    printf("Before swapping\nA=%d\nB=%d",a,b);

    c=b;
    b=a;
    a=c;
    printf("\nAfter swapping\nA=%d\nB=%d",a,b);

    return 0;
}