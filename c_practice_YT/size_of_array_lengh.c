#include <stdlib.h>
#include <stdio.h>

int main()
{
    int v[3] = {1,2,3};
    
    printf("Size of int: %zu\n",sizeof(int));
    printf("Size of v[0]: %zu\n",sizeof(v[0]));
    printf("Size of v: %zu\n",sizeof(v));     //4*3
    printf("Lengh of v: %zu\n",sizeof(v)/sizeof(v[0]));



    system("pause");
    return 0;
}