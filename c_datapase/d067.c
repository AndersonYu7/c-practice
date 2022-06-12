#include <stdio.h>
#include <stdlib.h>

int main()
{
    int year;
    scanf("%d",&year);

    if(year%400==0||(year%100!=0&&year%4==0)) printf("a leap year");    //被400整除 or 被4整除但不被100整除
    else printf("a normal year");

    system("pause");
    return 0;
}