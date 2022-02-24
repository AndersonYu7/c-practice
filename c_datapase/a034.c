#include <stdlib.h>
#include <stdio.h>

int main()
{
    int s[100] = {0};
    int input;
    int count;

    while(scanf("%d",&input) != EOF){
        count = 0;
        while(input!=1){
            s[count]=input%2;
            input/=2;
            count++;
        }
        s[count] = 1;

        for(int i=count;i>=0;i--){
            printf("%d",s[i]);
        }

        puts("");
    }

    system("pause");
    return 0;
}