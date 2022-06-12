#include <stdio.h>
#include <stdlib.h>

void main()
{
    int price;
    scanf("%d",&price);

    if(price < 1000) printf("%d 0",price);
    else if(1000 <= price && price < 2000) printf("%d 1",price-100);
    else{
        int chichi = price - (price/1000) * 100;
        int tiantian = price - (price/2000) * 200;

        if(chichi == tiantian) printf("%d 0",tiantian);
        else if(chichi < tiantian) printf("%d 1",chichi);
        else printf("%d 0",tiantian);
    }
    
    system("pause");
}