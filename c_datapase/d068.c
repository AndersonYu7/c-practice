#include <stdio.h>
#include <stdlib.h>

int main()
{
    int weight;

    scanf("%d",&weight);

    while(weight>50){
        weight--;
        break;
    }

    printf("%d",weight);


    system("pause");
    return 0;
}