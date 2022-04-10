#include <stdlib.h>
#include <stdio.h>

int main()
{
    int n,sum=0;
    scanf("%d",&n);

    int a[n];

    for(int i=1;i<=n;i++){
        a[i] = i*i-i+1;
        sum+=a[i];
    }

    printf("%d",sum);


    system("pause");
    return 0;
}