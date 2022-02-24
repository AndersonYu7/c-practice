#include <stdlib.h>
#include <stdio.h>

int maxv(int [],int N);

int main()
{
    int N;

    scanf("%d",&N);

    int n[N];

    for(int i=0;i<N;i++) scanf("%d",&n[i]);

    printf("The max is %d",maxv(n,N));


    system("pause");
    return 0;
}


int maxv(int n[],int N)
{
    int max = n[0];

    for(int i=0;i<N;i++){
        if(n[i] > max) max = n[i];
    }

    return max;
}