#include<stdio.h>
int main(){
    int units;
    float amt;
    
    printf("Enter units : ");
    scanf("%d",&units);

    if(units >= 100)
    {
        amt = 100 * 8;
        units -= 100;

            if(units >= 100)
            {
                amt = amt + (100 * 10);
                units -= 100;

                if(units >= 100)
                {
                    amt = amt + (100 * 12);
                    units -= 100;

                    if(units >= 100)
                   {
                           amt = amt + (100 * 15);
                           units -= 100;

                           if(units >= 100)
                           {         
                               amt = amt + (100 * 17);
                               units -= 100;

                               if(units >= 100)
                               {
                                amt = amt + (100 * 20);
                                units -= 100;
                                 if(units > 0) {
                                amt += units * 25;  
                                }
                               }
                            }else 
                                amt = amt + (units * 17);

                    }else 
                            amt = amt + (units * 15);
                }else 
                        amt = amt + (units * 12);
            }   else 
                    amt = amt + (units * 10);  
    } else 
            amt = amt + (units * 8); 

            printf("amount is : %.2f",amt);
}