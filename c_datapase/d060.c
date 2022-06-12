#include <stdio.h>
#include <stdlib.h>

int main()
{
    int time;
    scanf("%d",&time);
    printf("%d",(60-((time+60)-25)%60)%60);


    system("pause");
    return 0;
}