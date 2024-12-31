#include <stdio.h>
#include <cs50.h>

int main(void){
    int cents;
    int coins = 0;
    do
    {
        cents = get_int("coins: ");
        }

        while(cents > 100 || cents < 0 );
        printf("You gave this many coins:  %i\n", cents);
        while(cents != 0){

                if(cents == 0){
                printf("no change owed \n");
            }

            if(cents >= 75){
                cents -= 75;
                coins += 3;
            }
            else if(cents >= 50){
                cents -= 50;
                coins += 2;
            }
            else if(cents >= 25){
                cents -= 25;
                coins += 1;
            }
            else if(cents >= 10)
            {
                cents -= 10;
                coins +=1;
            }
            else if(cents >= 5)
            {
                cents -= 5;
                coins +=1;
            }
            else if(cents >= 1)
            {
                cents -= 1;
                coins +=1;
            }

    }
    printf("Coins to return: %i\n", coins);
            // how many quarters fit in it?
            // How many dimes fit in it?
            // How many nickles fit in it?
            // How many pennies fit in it?





        }
