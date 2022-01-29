#include <stdlib.h>
#include <stdio.h>

int main()
{
    int num[10];
    int i,Q;

    for(i=0;i<10;i++){
        scanf("%d",&num[i]);
    }

    while(1){
        int nearest_i=num[0];
        
        printf("Q:");
        scanf("%d",&Q);

        if(Q==0) break;

        for(i=0;i<10;i++){
            if(abs(Q-num[i])<abs(Q-nearest_i) || (abs(Q-num[i]) == (abs(Q-nearest_i)) && (nearest_i < num[i]))){
                nearest_i=num[i];
            }
        }
        printf("%d\n",nearest_i);
    }

    system("pause");
    return 0;
}