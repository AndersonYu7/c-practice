#include <stdio.h>
#include <stdlib.h>

int Sn(int K);
void main()
{
    int K;
    scanf("%d",&K);
    printf("%d",Sn(K));
    
    system("pause");
}

int Sn(int K)
{
    double sn = 1;
    int n = 1;
    while(sn<=K){
        n++;
        sn += (double)1/n;
        
    }
    return n;
}