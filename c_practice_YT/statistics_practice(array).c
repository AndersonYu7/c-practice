#include <stdlib.h>
#include <stdio.h>

float avg(int n[10]);
int MAX(int n[10]);

int main()
{
    int n[10];

    for(int i=0;i<10;i++){
        scanf("%d",&n[i]);
    }

    printf("avg : %f",avg(n));
    puts("");
    printf("MAX : %d",MAX(n));
    puts("");

    system("pause");
    return 0;
}

float avg(int n[10])
{
    int sum = 0;
    float avg;

    for(int i=0;i<10;i++) sum+=n[i];

    avg=(float)sum/10;

    return avg;

}

int MAX(int n[10])
{
    int max = n[0];

    for(int i=1;i<10;i++){
        if(n[i]>max) max=n[i];
    }

    return max;
}