#include <stdio.h>
#include <cs50.h>
#include <math.h>

int main(void)
{
    float changeowed;
    //float dollars = 100;
    int quarters = 25;
    int dimes = 10;
    int nickels = 5;
    int pennies = 1;
    int ctr = 0;
    changeowed = get_float("changeowed= ");
    while (changeowed < 0){
        changeowed = get_float("changeowed= ");
    }
    int cents = round(changeowed * 100);
    while ( cents >= quarters)
     {
         cents = cents - quarters;
         ctr++;
     }
    while ( cents >= dimes)
      {
          cents = cents - dimes;
          ctr++;
      }

    while ( cents >= nickels)
      {
          cents = cents - nickels;
          ctr++;
    }
    while ( cents >= pennies)
      {
          cents = cents - pennies;
          ctr++;
      }
        printf("%i\n",ctr);
}
