#include <stdio.h>
#include <stdlib.h>

int main()
{
    int expenditure[7];
    int i;
    int total=0;

    for(i = 0;i<7;i++){
        scanf("%d",&expenditure[i]);
    }

    for(i=0;i<7;i++){
        printf("%d",expenditure[i]);
        puts("");
        total+=expenditure[i];
    }

    printf("%d",total);

    system("pause");
    return 0;
}