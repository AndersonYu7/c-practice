#include <stdlib.h>
#include <stdio.h>

int main()
{
    int sale[2][4];
    int i,j;

    for(i=0;i<2;i++){
        for(j=0;j<4;j++){
            printf("[%d][%d]",i+1,j+1);
            scanf("%d",&sale[i][j]);
        }
    }

    puts("");
    int total=0;

    for(i=0;i<2;i++){
        for(j=0;j<4;j++){
            printf("[%d][%d]:%d",i+1,j+1,sale[i][j]);
            puts("");

            total+=sale[i][j];
        }
    }   

    printf("%d",total); 

    system("pause");
    return 0;
}