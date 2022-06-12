#include <stdio.h>
#include <stdlib.h>

void main()
{
    int h1, m1, h2, m2;
    while(scanf("%d %d %d %d",&h1, &m1, &h2, &m2) != EOF){
        if(h1 != m1 || m1 != h2 || h2 != m2 || m2 != 0){
            if(h2 != h1 && h2 == 0) h2 = 24;
            if(m2 - m1 < 0){
                if(h1 != h2) printf("%d",(h2 - h1 - 1)*60 + m2 - m1 + 60);
                else printf("%d",23*60 + m2 - m1 + 60);
            }
            else printf("%d", (h2 - h1)*60 + m2 - m1);
        }
        puts("");
    }
    
    system("pause");
}