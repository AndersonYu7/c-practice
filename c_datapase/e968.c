#include <stdio.h>
#include <stdlib.h>

void main()
{
    int number;
    scanf("%d",&number);

    int arr[3];
    int *p;
    for(p = arr;p != &arr[3];p++) scanf("%d",&*p);

    number++;
    while(number--){
        if(number != arr[0] && number != arr[1] && number != arr[2] && number != 0) printf("No. %d\n",number);
    }
   
    system("pause");
}