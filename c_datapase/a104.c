#include <stdio.h>
#include <stdlib.h>

int main()
{
    
    int N;

    while(scanf("%d",&N)!=EOF){

        int v[N];

        for(int i=0;i<N;i++){
            scanf("%d",&v[i]);
        }

        for(int i=0;i<N-1;i++){
            for(int j=0;j<N-1-i;j++){
                if(v[j]>v[j+1]){
                    int t=v[j];
                    v[j]=v[j+1];
                    v[j+1]=t;
                }
            }
        }

        for(int i=0;i<N;i++){
            printf("%d ",v[i]);
        }
        puts("");
    }


    system("pause");
    return 0;
}