#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,k;
    while(scanf("%d %d",&n,&k)!=EOF){
        int sum = n + n/k;
        n = n/k + n%k;
        while(n>=k){
            sum+=n/k;
            n = n/k;
        }
        printf("%d\n",sum);
    }
    system("pause");
    return 0;
}