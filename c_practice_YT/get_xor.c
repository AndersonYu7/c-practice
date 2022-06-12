#include <stdio.h>
#include <stdlib.h>
#define size 8


int change(long long int n)
{
    long long int binary = 0, i = 1, remainder;

    while (n!=0)
    {
        remainder = n%2;
        n /= 2;
        binary += remainder*i;
        i *= 10;
    }
    n = binary;

    return n;
}

int main()
{
    char binary[3][size+1];

    scanf("%s %s",&binary[0],&binary[1]);

    int decimal[3] = {0};

    for(int i=0;i<size;i++){
        decimal[0] = 2*decimal[0] + binary[0][i]-48;
        decimal[1] = 2*decimal[1] + binary[1][i]-48;
    }

    decimal[2] = decimal[0]^decimal[1];
    printf("%d",change(decimal[2]));

    system("pause");
    return 0;
}