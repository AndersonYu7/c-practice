#include <stdio.h>
#include <time.h>

static unsigned int _next = 1;   //(static)only this file

int rand(void)
{
    _next = _next * 1103515245 + 12345;
    return _next / 65536 % 32768;   //_next/2^16 % 2^15 
}

void srand(unsigned int seed)
{
    _next = seed;   //setting random seed
}

int main()
{
    srand(time(NULL));

    for(int i=1;i<=5;i++){
        printf("%d\n", rand());
    }

    system("pause");
    return 0;
}