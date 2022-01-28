#include <stdio.h>
#include <stdlib.h>

int main()
{
    int T,a[1000]={0};
    int count = 0;
    

    scanf("%d",&T);

    for(int i=0;i<T*2;i++){
        scanf("%d",&a[i]);
    }
 
    for(int j=0;j<2*T;j+=2){
        int sum=0;
        count++;
        for(int i=a[j];i<=a[j+1];i++){
            for(int k=1;k<=i;k++){
                if(k*k==i){
                    sum+=i;
                }
            }
        }
        printf("Case %d: %d\n",count,sum);
    }


    system("pause");
    return 0;
}