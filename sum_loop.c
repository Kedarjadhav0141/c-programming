#include<stdio.h>
int main(){
    int i, n, sum=0;
    printf("Enter a N :");
    scanf("%d",&n);

    for(i=1; i<=n; i++){
        sum=sum+i;
    }
    printf("Addition of %d to %d is %d",1,n,sum);
    return 0;
}