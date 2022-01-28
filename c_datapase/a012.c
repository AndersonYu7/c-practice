#include <stdlib.h>
#include <stdio.h>

int main()
{
    int num;
    int count=0;
    scanf("%d",&num);

    for(int i=2;i<=num;i++){
        while(num%i==0){
            num = num/i;
            count++;
        }

        if(count>1){
            printf("%d^%d",i,count);
        }

        else if(count == 1){
            printf("%d",i);
        }

        if(num==1){
            puts("");
        }

        else if(num%i!=0 && count >=1){
            printf(" * ");
        }

        count = 0;
    }

    system("pause");
    return 0;


}