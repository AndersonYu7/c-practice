#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num;
    while(scanf("%d",&num)!=EOF){
        printf("%d\n",num*3/2);
    }

    system("pause");
    return 0;
}