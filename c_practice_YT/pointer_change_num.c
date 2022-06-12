#include <stdlib.h>
#include <stdio.h>


void swap(int *,int *);
int main()
{
    int a = 3,b = 5;

    printf("a=%d\nb=%d\n",a,b);

    swap(&a,&b);

    printf("a=%d\nb=%d\n",a,b);


    system("pause");
    return 0;
}

void swap(int *x,int *y)
{
    int z = *x;
    *x = *y;
    *y = z;
}