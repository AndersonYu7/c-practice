#include <stdlib.h>
#include <time.h>

int main()
{
    int i;
    int counter[11] = {0};

    srand(time(NULL));

    for(i=0;i<=100000;i++){
        int dice = rand()%6+1;
        int dice_2 = rand()%6+1;
        int sum = dice+dice_2;
        counter[sum-2]++;
    }
    for(int j=0;j<11;j++){
        printf("%d:%d",j+2,counter[j]);
        puts("");
    }

    system("pause");
    return 0;
}