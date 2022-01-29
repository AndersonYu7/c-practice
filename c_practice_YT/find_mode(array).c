#include <stdlib.h>
#include <stdio.h>

int main()
{
    int n,ans = 0;
    int b[10] = {0};
    
    for(int i=0;i<10;i++){
        scanf("%d",&n);     //0~9
        b[n]++;
    }

    for(int j=1;j<10;j++){
        if(b[j]>=b[ans]) ans=j;
    }

    printf("ANS: %d\n",ans);


    system("pause");
    return 0;
}