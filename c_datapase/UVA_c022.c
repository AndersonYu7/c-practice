#include <stdio.h>
#include <stdlib.h>

void main()
{
    int num;
    scanf("%d",&num);

    int count = 1;
    while(num--){
        int min, max, sum = 0;
        scanf("%d %d",&min,&max);

        for(int i=min;i<=max;i++)
            if(i%2 == 1) sum += i;
        
        printf("Case %d: %d\n",count++,sum);
    }    

    system("pause");
}