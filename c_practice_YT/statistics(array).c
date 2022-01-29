#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,b[10]={0};

    for(int i=0;i<10;i++){
        scanf("%d",&n);

        b[(n-1)/10]++;
    }

    for(int j=1;j<=10;j++){
        printf("%3d: ",j*10);

        for(int k=1;k<=b[j-1];k++){
            printf("*");
        }
        puts("");
    }


    system("pause");
    return 0;
}