#include <stdio.h>
#include <stdlib.h>

int parity;
void fun(int);
int main()
{
    int n;
    while(scanf("%d",&n)==1&&n){
        parity = 0;

        printf("The parity of ");
        fun(n);
        printf(" is %d (mod 2).\n", parity);
    }
    
    system("pause");
    return 0;
}

void fun(int n)
{
    if(n){
        fun(n/2);
        printf("%d",n&1);
        parity+=n&1;
    }
}