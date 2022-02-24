#include <stdlib.h>
#include <stdio.h>

int lengh(int v[]);

int main()
{
    int v[] = {1,2,3,6,-1};   //-1 is represent for reserved value
    
    printf("The lengh is %d",lengh(v));


    system("pause");
    return 0;
}

int lengh(int v[])
{
    int i=0;

    while(v[i]!=-1){
        i++;
    }

    return i+1;  //num +　reserved number
}