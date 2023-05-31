/*: Write a program to input three numbers and find out the smallest*/
#include "stdio.h"
int main()
{
    int num1, num2, num3, smlst;
    printf("Enter three numbers:\n");
    scanf("%d %d %d", &num1, &num2, &num3);
    smlst = (num1 < num2 && num1 < num3) ? num1 : num2 < num3? num2 : num3;
    printf("%d smallest among these three numbers", smlst);
    return 0;
}