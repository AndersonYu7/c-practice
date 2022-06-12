#include <stdio.h>
#include <stdlib.h>

int main()
{
    int decimal = 0, n, binary;

    printf("Please input a size of binary\n");
    scanf("%d",&n);

    for(int i=0;i<n;i++){
        scanf("%d",&binary);
        decimal = 2 * decimal + binary;     //計算二進制轉十進制並將數值存在decimal中
    }

    printf("%d",decimal);

    system("pause");
    return 0;
}

