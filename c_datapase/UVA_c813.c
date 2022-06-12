#include <stdio.h>
#include <stdlib.h>

long long int f(long long int );
void main()
{
    long long int n;
    while(scanf("%lld",&n)&&n){
        printf("%lld\n",f(n));
    }

    system("pause");
}

long long int f(long long int n)
{
    int sum = 0;
    while(n){
        sum+=n%10;
        n/=10;
    }
    if(sum<10) return sum;
    else return f(sum);

}