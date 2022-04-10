#include <stdlib.h>
#include <stdio.h>
#define size  1000

int main()
{
    int n,k,count=0;
    int num[size];
    while(n!=-1){
        scanf("%d",&n);
        num[count]=n;
        count++;
    }

    for(int i=0;i<count;i++){
        for(int j=0;j<count-i;j++){
            if(num[j]>num[j+1]){
                int t=num[j];
                num[j]=num[j+1];
                num[j+1]=t;
            }
        }
    }
    
    scanf("%d",&k);
    printf("%d",num[count-k]);   //測資需printf("%d",num[count+1-k]);

    system("pause");
    return 0;
}