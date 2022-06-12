#include <stdio.h>
#include <stdlib.h>

void change(long long int *n)
{
    long long int binary = 0, i = 1, remainder;

    while (*n!=0)
    {
        remainder = *n%2;
        *n /= 2;
        binary += remainder*i;
        i *= 10;
    }
    *n = binary;
}

int main()
{
    long long int num;
    scanf("%lld",&num);
    change(&num);
    printf("%lld",num);

    system("pause");
    return 0;
}