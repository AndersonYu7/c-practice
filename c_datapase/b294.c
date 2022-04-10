#include <stdlib.h>
#include <stdio.h>

int main()
{
    int N,sum=0;
    scanf("%d",&N);
    int num[N];

    for(int i=0;i<N;i++) scanf("%d",&num[i]);

    for(int i=1;i<=N;i++){
        sum += num[i-1]*i;
    }

    printf("%d",sum);


    system("pause");
    return 0;
}