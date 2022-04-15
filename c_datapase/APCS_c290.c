#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char num[1000];
    scanf("%s",num);

    int length = strlen(num);
    int A = 0, B = 0;

    for(int i=0;i<length;i++){
        if(i%2) A+=num[i]-'0';
        else B+=num[i]-'0';
    }
    printf("%d",abs(A-B));

    system("pause");
    return 0;
}