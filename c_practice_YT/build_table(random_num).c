#include <stdlib.h>
#include <stdio.h>
#include <time.h>

int main()
{
    srand(time(NULL));

    int n;
    int counter[10] = {0};
    
    for(int i=1;i<=10;i++){
        do{
            n = rand()%10 + 1;
        }while(counter[n-1]!=0);
        
        printf("%d ",n);
        counter[n-1]++;
    }
    puts("");

    system("pause");
    return 0;
}