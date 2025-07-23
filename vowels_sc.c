#include<stdio.h>
#include<ctype.h>
int main(){
    char ch;
    printf("Enter any alphabet : ");
    scanf("%c",&ch);
    ch = tolower(ch);

    switch(ch){
        case 'a' :
        case 'e' :
        case 'i' :
        case 'o' :
        case 'u' : printf("vowels");
                   break;
        default : printf("constant");
    }
    return 0;
}