#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    srand(time(NULL));

    int n[10],isused;

    for(int i=1;i<=10;i++){
        do{
            n[i-1] = rand()%10+1;
            isused = 0;
            
            for(int j=1;j<i;j++){
                if(n[i-1] == n[j-1]){
                    isused = 1;
                    break;
                }
            }
        }while(isused == 1);

        printf("%d ",n[i-1]);
    }
    puts("");


    system("pause");
    return 0;
}