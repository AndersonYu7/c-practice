#include <stdlib.h>
#include <stdio.h>

int main(){

    int t,num,newnum = 0;

    scanf("%d",&num);

    while(num > 0){
        t = num % 10;       

        num /= 10;          

        newnum = newnum * 10 + t;
    }

    printf("%d", newnum);

    system("pause");
    return 0;
}
