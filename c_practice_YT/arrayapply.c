#include <stdlib.h>
#include <stdio.h>
#include <time.h>

int main()
{
    int price[5] = {10,20,30,40,50};
    int total = 0,id;
    printf("1:10\n2:20\n3:30\n4:40\n5:50\n");
    do{
        scanf("%d",&id);
        total+=price[id-1];
    }while(id!=0 && id<6);

    printf("Total: %d\n",total);

    system("pause");
    return 0;
}