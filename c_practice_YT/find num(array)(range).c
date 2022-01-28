#include <stdlib.h>
#include <stdio.h>

int main()
{
    int num[10];
    int i,L,R;

    for(i=0;i<10;i++){
        scanf("%d",&num[i]);
    }

    while(1){
        printf("L R:");
        scanf("%d %d",&L,&R);

        if(L==0&&R==0) break;

        printf("ANS: ");

        for(i=0;i<10;i++){
            if(num[i]>=L && num[i]<=R){
                printf("%d ",num[i]);
            }
        }
        puts("");
    }

    system("pause");
    return 0;
}