#include <stdio.h>
#include <stdlib.h>

int sum = 0;
int eval(int );
int main()
{
    int num;
    while(scanf("%d",&num)!=EOF){
        sum+=num;
        printf("%d\n",eval(num+1));
        sum=0;
    }

    system("pause");
    return 0;
}

int eval(int n)
{
    sum+=n/3;
    if(n/3==0) return sum;
    else{
        return eval(n/3+n%3);
    }
}