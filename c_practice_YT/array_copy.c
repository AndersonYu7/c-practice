#include <stdio.h>
#include <stdlib.h>

void array_1(int n[3]);

int main()
{
    
    int n[3] = {1,2,3} ;

    for(int i=0;i<3;i++){
        printf("%d ",n[i]);
    }

    array_1(n);
    puts("");


    for(int i=0;i<3;i++){
        printf("%d ",n[i]);
    }

    system("pause");
    return 0;
}

void array_1(int n[3])      //it means the array can return, but the number cannot do it which just can't copy the operate on variables
{
    for(int i=0;i<3;i++) n[i]++;
}