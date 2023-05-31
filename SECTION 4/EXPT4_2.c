/*Write a program to input a number and print “ODD” if the number is odd and “EVEN” if
the number is even.*/
#include "stdio.h"
void main()
{
    int num;
    printf("Enter a number\n");
    scanf("%d", &num);
    if (num % 2 == 0)
        printf("Entered number %d is EVEN", num);
    else
        printf("Entered number %d is ODD", num);
}