#include<stdio.h>
int main(){
    int units;
    float amt=0;

    printf("Enter Number of units : ");
    scanf("%d",&units);

    if(units<=100){
        amt=units*10;
    }
    else if(units<=200){
        amt=(100*10)+((units-100)*15);
    }
    else if(units<=300){
        amt=(100*10)+(100*15)+((units-200)*20);
    }else{
        amt=(100*10)+(100*15)+(100*20)+((units-300)*25);
    }
    
    printf("Total electricity bill for %d units is rs %.2f\n",units, amt);

    return 0;
}