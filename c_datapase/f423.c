#include <stdio.h>
#include <stdlib.h>

int main()
{
    int input;
    int n;
    int sum;
    

    scanf("%d",&input);

    if(input%2 == 1){
        n = (1+input)/2;
        sum = n*(1+input)/2;
    }

    else{
        n = input/2;
        sum = n*input/2;
    }

    printf("%d",sum);


    system("pause");
    return 0;
}