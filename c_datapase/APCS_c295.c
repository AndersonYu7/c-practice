#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,m;
    int Max[20] = {0};
    int sum = 0;

    scanf("%d %d",&n,&m);

    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            int input;
            scanf("%d",&input);
            if(input>Max[i]){
                Max[i] = input;
            }
        }
        sum+=Max[i];
    }
    printf("%d\n",sum);

    int judge = 0;
    for(int i=0;i<n;i++){
        if(sum%Max[i]==0){
            if(judge == 0){
                printf("%d",Max[i]);        //輸出的最後一個後面不能有空格
            }
            else{
                printf(" %d",Max[i]);
            }
            judge = 1;
        }
    }

    if(judge==0) printf("-1\n");

    system("pause");
    return 0;
}