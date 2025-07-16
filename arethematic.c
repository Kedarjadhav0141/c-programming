#include<stdio.h>
int main(){
    int a,b;
    printf("Enter two numbers : ");
    scanf("%d%d",&a,&b);

    printf("\naddition is : %d", (a+b));
    printf("\nsubstraction is : %d", (a-b));
    printf("\nmultiplication is : %d", (a*b));
    printf("\ndivision is : %d", (a/b));

    return 0;

}