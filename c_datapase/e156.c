#include <stdio.h>
#include <stdlib.h>

int sadd(int n)
{
    int m = 0;
    (n != 0) && (m = (n + sadd(n - 1)));  //bool : true or false to judge return

    return m;

}

int main()
{
    int n, m;
    scanf("%d", &n);

    m = n + sadd(n - 1);

    printf("%d", m);

    system("pause");
    return 0;
}
