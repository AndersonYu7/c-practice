#include <stdio.h>
#include <stdlib.h>

void leap_or_normal(int year);
void main()
{
    int num;
    int year;
    scanf("%d",&num);
    while(num--){
        scanf("%d",&year);
        leap_or_normal(year);
    }

    system("pause");
}

void leap_or_normal(int year)
{
    year%400 == 0 || (year%4==0 && year%100 !=0) ? printf("a leap year\n") : printf("a normal year\n");
}