#include <stdio.h>
#include <stdlib.h>

int main()
{
    int h,m;
    scanf("%d %d",&h,&m);

    float hh = (float)m/60+h;

    if(hh>=7.5 && hh<17) printf("At School");
    else printf("Off School");


    system("pause");
    return 0;
}