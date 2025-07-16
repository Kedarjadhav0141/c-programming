#include<stdio.h>
int main(){
    int n;

    printf("Enter the number : ");
    scanf("%d", &n);

    if(n&1)
        printf("Number is odd");
    else
        printf("Number is even");
    

    return 0;
}