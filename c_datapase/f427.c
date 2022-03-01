#include <stdlib.h>
#include <stdio.h>

int main()
{
    int n,i;
    int pi[15]={1,4,1,5,9,2,6,5,3,5,8,9,7,9,3};

    scanf("%d",&n);

    printf("%d",pi[n-1]);

    system("pause");
    return 0;
}