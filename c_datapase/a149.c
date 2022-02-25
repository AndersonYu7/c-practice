#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int main()
{
    int N,mult;
    char num[100];

    scanf("%d",&N);

    for(int k=0;k<N;k++){
        mult = 1;
        scanf("%s",num);
        int n = strlen(num);

        for(int i=0;i<n;i++){
            mult*=num[i]-48;
        }
        printf("%d\n",mult);
    }

    system("pause");
    return 0;
}