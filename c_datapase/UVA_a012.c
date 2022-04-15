#include <stdio.h>
#include <stdlib.h>

int main()
{
    long long int n1,n2;

    while(scanf("%lld %lld",&n1,&n2)!=EOF){
        printf("%lld\n",abs(n1-n2));
    }


    system("pause");
    return 0;
}