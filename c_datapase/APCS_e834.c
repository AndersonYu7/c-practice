#include <stdio.h>
#include <stdlib.h>

void main()
{
    int how_many;
    scanf("%d",&how_many);
    
    int num;
    while(scanf("%d",&num) && num){
        if(num%how_many==0) printf("%d\n",num/how_many);
        else printf("%d\n",how_many - num%how_many);
    }

    system("pause");
}