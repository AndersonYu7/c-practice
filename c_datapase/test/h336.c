#include <stdlib.h>
#include <stdio.h>

int compute(int x, int y);
int main()
{
    int x,y;
    scanf("%d %d",&x,&y);
    
    printf("%d",compute(x,y));

    system("pause");
    return 0;
}

int compute(int x, int y)
{
    return x*y;
}