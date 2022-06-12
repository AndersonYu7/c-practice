#include <stdio.h>
#include <stdlib.h>

int eval();
int  main()
{
    printf("%d",eval());

    system("pause");
    return 0;
}

int eval()
{
    int num;
    if(scanf("%d",&num)==1) return num; //判斷是否輸入數字

    char input;
    scanf("%c",&input);

    if(input == 'f'){
        int x = eval();
        return 2 * x - 3;
    }

    else if(input == 'g'){
        int x = eval();
        int y = eval();
        return 2 * x + y - 7;
    }

    else if(input == 'h'){
        int x = eval();
        int y = eval();
        int z = eval();
        return 3 * x - 2 * y + z;
    }
}