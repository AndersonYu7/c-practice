#include <stdio.h>
#include <stdlib.h>

int main()
{
    int N;

    while(scanf("%d",&N)!=EOF){
        printf("%d\n",(N*N*N+5*N+6)/6);   //formula
    }



    system("pause");
    return 0;
}