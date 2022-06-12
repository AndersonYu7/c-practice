#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void main()
{
    int M;
    scanf("%d",&M);

    int a, b, c;
    while(M--){
        scanf("%d %d %d",&a, &b, &c);

        if((b*b-4*a*c)<0) printf("No\n");
        else{
            if(sqrt(b*b-4*a*c) == (int)sqrt(b*b-4*a*c)) printf("Yes\n");
            else printf("No\n");
        }
    }
    
    system("pause");
}