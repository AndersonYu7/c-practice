#include <stdio.h>
#include <stdlib.h>
#define size 3

int main()
{
    int num[size];
    for(int i=0;i<size;i++) scanf("%d",&num[i]);

    for(int i=0;i<size-1;i++){
        for(int j=0;j<size-1-i;j++){
            if(num[j]>num[j+1]){
                int x = num[j];
                num[j] = num[j+1];
                num[j+1] = x;
            }
        }
    }
    printf("%d",num[size-1]);

    system("pause");
    return 0;
}