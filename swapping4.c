#include<stdio.h>
int main(){
    int a,b,c;
    printf("Enter two numbers : ");
    scanf("%d%d", &a,&b);
    printf("Before swapping\nA=%d\nB=%d",a,b);

    a=a*b;
    b=a/b;
    a=a/b;
    printf("\nAfter swapping\nA=%d\nB=%d",a,b);

    return 0;
}