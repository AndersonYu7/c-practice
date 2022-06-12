#include <stdio.h>
#include <stdlib.h>

int main()
{
    int S,N;

    while(scanf("%d",&N)!=EOF){
        S = 0;
        for(int i=1;i<N;i++){
            if(N%i==0) S+=i;
        }

        if(S<N) printf("虧數\n");
        else if(S>N) printf("盈數\n");
        else printf("完全數\n");
    }


    system("pause");
    return 0;
}