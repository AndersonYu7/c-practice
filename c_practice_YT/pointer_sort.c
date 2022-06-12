#include <stdio.h>
#include <stdlib.h>


void sort(int *,int *);
int main()
{
    int a = 5,b = 3;

    printf("a=%d\nb=%d\n",a,b);
    sort(&a,&b);
    printf("a=%d\nb=%d\n",a,b);



    system("pause");
    return 0;
}


void sort(int *a,int *b)
{
    if(*a>*b){
        int t = *a;
        *a = *b;
        *b = t;
    }
}