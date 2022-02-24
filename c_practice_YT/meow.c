#include <stdlib.h>
#include <stdio.h>
#include <time.h>

int main()
{
    srand(time(NULL));
    
    int n[6],isused;

    for(int i=1;i<=6;i++){
         do{
            n[i-1] = rand()%49+1;
            isused = 0;
            
            for(int j=1;j<i;j++){
                if(n[i-1] == n[j-1]){
                    isused = 1;
                    break;
                }
            }
         }while(isused == 1);
    }

    for(int i=0;i<6;i++){
        printf("%d ",n[i]);
    }

    system("pause");
    return 0;
}