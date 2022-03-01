#include <stdlib.h>
#include <stdio.h>

int main()
{
    long long int F,G;
    int n;

    while((scanf("%d",&n))!=EOF){
        F=G=1;
        for(int i=0;i<n;i++){
            if(n>1 && i>0){
                F =  i + 1 + F;
                G = F + G;
            }
            else continue;
        }
        printf("%lld %lld\n",F,G);
    }

    system("pause");
    return 0;
}