/* An electricity board charges the following rates for the use of electricity.
− For the first 200 units: 80 paise per unit
− For the next 100 units: Rs. 1.30 per unit
− Beyond 300 units: Rs. 2.00 per unit
All users are charged a minimum of Rs. 100 as meter charge. If the total amount is more that Rs. 400, then
an additional surcharge of 15% of total amount is charged. Write a program to read the name of a
consumer and the number of units consumed and print the charge with his/her name.*/
#include "stdio.h"
int main()
{
    char s[30];
    int unit;
    float sum = 100.0;
    printf("Enter your name\n");
    gets(s);
    printf("Enter the number of units consumed\n");
    scanf("%d", &unit);
    if (unit <= 200)
        sum = sum + (0.8 * unit);
    else if (unit <= 300)
    {
        sum = sum + 160;
        unit = unit - 200;
        sum = sum + (1.30 * unit);
    }
    else if (unit >= 300)
    {
        sum = sum + 290;
        unit = unit - 300;
        sum = sum + (2 * unit);
        if (sum >= 400)
            sum = (sum * 1.15);
    }
    printf("\n\n");
    puts(s);
    printf("Dear consumer! you have charged %0.2f rupees for your electricity consumption.", sum);
    return 0;
}
