#include <stdlib.h>
#include <stdio.h>

int main()
{
    int N,sum=0;
    scanf("%d",&N);
    int num[N];
    
    for(int i=0;i<N;i++) scanf("%d",&num[i]);

    for(int j=1;j<=N-2;j++){
        if(num[j]==0){
            if(num[j+1]>=num[j-1]) sum += num[j-1];
            else sum += num[j+1];
        }
        else continue;
    }

    if(num[0]==0) sum += num[1];
    if(num[N-1]==0) sum += num[N-2];

    printf("%d",sum);

    system("pause");
    return 0;
}