#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a = 5;
    int *ptr = &a;

    printf("%p\n",&a);
    printf("%p\n",ptr);
    printf("%p\n",&ptr);

    system("pause");
}