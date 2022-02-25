#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char str[10000];
    int index = 1;

    gets(str);

    int n = strlen(str);

    for(int i=0;i<n;i++){
        if(str[n-i-1] == str[i]) index = 0;
        else index = 1;
    }

    if(index == 0) printf("yes");
    else printf("no");


    system("pause");
    return 0;
}