/*Admission to professional course is subject to the any one of the following conditions:
a) Marks in Mathematics >= 60, and Marks in Physics >= 50, and Marks in Chemistry >= 40
b) Total in all three subjects >= 200
Write a program that takes as input the marks in three subjects and displays “Admitted” if the student is
admitted else displays “Not Admitted”*/
#include "stdio.h"
int main()
{
    int math, physics, chemistry, total;
    printf("Enter marks in mathematics\n");
    scanf("%d", &math);
    printf("Enter marks in physics\n");
    scanf("%d", &physics);
    printf("Enter marks in chemistry\n");
    scanf("%d", &chemistry);
    total = math + physics + chemistry;
    ((math>=60 && physics>=50 && chemistry>=40)|| (total>=200))?printf("Admitted"): printf("Not admitted");
    return 0;
}