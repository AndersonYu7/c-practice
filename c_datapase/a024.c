#include <stdlib.h>
#include <stdio.h>

int main()
{
    int a,b,big;

    scanf("%d %d",&a,&b);

    while(b != 0) { 

            big = a % b; 
            a = b; 
            b = big; 
        } 

    printf("%d\n",a);

    system("pause");
    return 0;
}