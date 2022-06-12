#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void main()
{
    int a,b,c;
    scanf("%d",&a);

    b = (a==0);         //由於0會輸出1 所以利用+1以及bool判斷是否為1來讓 0輸出0
    a += b;
    c = abs(a);

    printf("%d\n",a/c-b);

    system("pause");
}