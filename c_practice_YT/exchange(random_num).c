#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    srand(time(NULL));

    int n[10];

    for(int i=1;i<=10;i++){
        n[i-1] = i;
    }

    for(int i=1;i<=10;i++){
        int j = rand()%(11-i) + i;  //%(end - start + 1) + 1

        int t = n[i-1];
        n[i-1] = n[j-1];
        n[j-1] = t;

        printf("%d ",n[i-1]);
    }
    puts("");

    system("pause");
    return 0;
}