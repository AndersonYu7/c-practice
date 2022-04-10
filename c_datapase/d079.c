#include <stdlib.h>
#include <stdio.h>

int smoke(int,int,int);
int main()
{
    int n,k;

    while(scanf("%d %d",&n,&k)!=EOF){
        printf("%d\n",smoke(n,n/k,k));
    }

    system("pause");
    return 0;
}

int smoke(int n,int m,int k)
{
    if((n+m)<k){
        return n;
    }

    else{
        return (n+m)/k+n;
    }
}