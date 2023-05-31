/*Write a program that will read the value of x and evaluate the following function:
    { 1 for x>0
y = {0 for x = 0
    { -1 for x<0*/
#include "stdio.h"
int main()
{
    int val;
    printf("Enter the value of x:\n");
    scanf("%d", &val);
    printf("The value of x you have entered %d\n", val);
    if (val > 0)
    {
        printf("the value of y is 1");
    }
    else if (val == 0)
    {
        printf("the value of y is 0");
    }
    else
    {
        printf("the value of y is -1");
    }
    return 0;
}