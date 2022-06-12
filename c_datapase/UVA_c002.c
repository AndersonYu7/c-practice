#include <stdio.h>
#include <stdlib.h>

int f91(int );
void main()
{
    int n;
    while(scanf("%d",&n)&&n){
        printf("f91(%d) = %d\n",n,f91(n));
    }

    system("pause");
}

int f91(int n)
{
    return n<=100 ? f91(f91(n+11)) : n-10;
}