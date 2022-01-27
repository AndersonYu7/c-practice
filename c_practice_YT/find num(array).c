#include <stdlib.h>
#include <stdio.h>

int main()
{
    int n[5],i;
    
    for(i=0;i<5;i++){
        printf("%d:",i+1);
        scanf("%d",&n[i]);
    }

    while(1){
        printf("Q:");
        scanf("%d",&i);
        if(i==0) break;

        printf("%d\n",n[i-1]);
    }

    system("pause");
    return 0;
}