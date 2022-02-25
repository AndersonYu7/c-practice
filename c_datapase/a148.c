#include <stdio.h>
#include <stdlib.h>

int main()
{
    float PN,num,sum;
    

    while(scanf("%f",&PN)!=EOF){
        sum = 0;
        for(int i=0;i<PN;i++){
            scanf("%f",&num);
            sum+=num;
        }

        if((sum/PN) > 59) printf("no");
        else printf("yes");
        puts("");
    }

    system("pause");
    return 0;
}