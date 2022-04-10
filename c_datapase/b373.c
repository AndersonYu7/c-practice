#include <stdlib.h>
#include <stdio.h>


int main()
{
    int N;
    scanf("%d",&N);

    int v[N];
    for(int i=0;i<N;i++) scanf("%d",&v[i]);

    int count = 0;
    for(int i=0;i<N-1;i++){
        for(int j=0;j<N-1-i;j++){
            if(v[j]>v[j+1]){
                int t=v[j];
                v[j]=v[j+1];
                v[j+1]=t;
                count++;
            }
        }
    }
    printf("%d",count);

    system("pause");
    return 0;
}
