#include <stdio.h>
#include <stdlib.h>

void main()
{
    int number;
    int count = 1;
    while(scanf("%d",&number) && number){
        int arr[number], sum = 0, sum_2 = 0;
        for(int i=0;i<number;i++){ 
            scanf("%d",&arr[i]);
            sum+=arr[i];
        }
        sum/=number;

        for(int i=0;i<number;i++){
            if(arr[i]-sum>0) sum_2+=(arr[i]-sum);
        }

        printf("Set #%d\n",count++);
        printf("The minimum number of moves is %d.\n",sum_2);
    }
    
    system("pause");
}