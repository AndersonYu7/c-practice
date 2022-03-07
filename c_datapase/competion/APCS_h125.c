#include <stdio.h>
#include <stdlib.h>

int main()
{
    long long int n,m;
    int front_circle = 0,back_circle = 0;

    scanf("%lld %lld",&n,&m);

    long long int can_num[n];

    for(int i=0;i<n;i++) scanf("%lld",&can_num[i]);

    if(n%m==0){
        if(n==m) printf("%lld",can_num[n-1]);
        else printf("%lld",can_num[n/2]);
    }
    else{
        if((n/m)%2==1) printf("%lld",can_num[((n/m)/2+1)*m]);
        else if((n/m)%2==0) printf("%lld",can_num[n-n/m/2*m-1]);
    }

    system("pause");
    return 0;
}