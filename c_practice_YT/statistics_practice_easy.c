#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,max,sum=0;
    float avg;

    for(int i=0;i<10;i++){
        scanf("%d",&n);
        sum+=n;

        if(i==1 || n>max) max = n;
    }

    avg=(float)sum/10;

    printf("AVG:%f\n",avg);
    printf("MAX:%d\n",max);


    system("pause");
    return 0;
}