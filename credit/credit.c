
#include <cs50.h>
#include <stdio.h>
int main(void)
{
//prototypes
    int calculate_checksum(long card_number,long i);
// prompt for input
    long card_number;
    int sum;
    int all;
    int small;
    int equal;
    do
    {
     card_number = get_long("enter card number: ");
    }
    while (card_number < 0);


    for (long i = 10; i < card_number; i = i * 100)
    {
         sum = calculate_checksum(card_number,i);

            if ( sum < 5)
          {
            small = sum * 2;

          }
            else {
            sum = sum * 2;
            int number = sum / 10;
            int rest = sum % 10;
            all = number + rest;

            }
             equal =  small + all;
    }
        printf("%i", equal);
    }



//checksum function
    int calculate_checksum(long card_number,long i)
{
        for (long i = 10; i < card_number; i = i * 100){
        return (card_number % (10 * i)) / i;
        }
        //multiplied_digit = multiplied_digit * 2;

}



