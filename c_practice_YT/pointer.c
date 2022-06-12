#include <stdlib.h>
#include <stdio.h>


void addoone(int *);
int main()
{
    int a = 3;

    printf("%d\n",a);  //3
    addoone(&a);
    printf("%d\n",a);  //4

    system("pause");
    return 0;
}

void addoone(int *n)
{
    *n = *n + 1;
}