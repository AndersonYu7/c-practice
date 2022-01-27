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
        int max_i=-1;
        
        printf("Q:");
        scanf("%d",&Q);

        if(Q==0) break;

        for(i=0;i<10;i++){
            if(num[i]<=Q && (max_i == -1 || num[i]>num[max_i])){
                max_i=i;
            }
        }
        if(max_i!=-1) printf("%d\n",num[max_i]);
    }

    system("pause");
    return 0;
}