#include<stdio.h>
#include<ctype.h>
int main(){
    char ch;
    printf("Enter anything :");
    scanf("%c",&ch);

    if(isupper(ch))
    printf("Capital Letter");
    else if(islower(ch))
    printf("Small Letter");
    else if(isdigit(ch))
    printf("Digit");
    else
    printf("Special Symbol");

    return 0;
}