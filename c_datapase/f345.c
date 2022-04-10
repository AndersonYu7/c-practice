#include <stdio.h>
#include <stdlib.h>

int main()
{
    int N;
    scanf("%d",&N);

    int array[N],rev_array[N];
    for(int i=0;i<N;i++){
        scanf("%d",&array[i]);
        rev_array[N-1-i] = array[i];
    }
    for(int i=0;i<N/2;i++) rev_array[i] = array[N-1-i];


    for(int i=0;i<N;i++) printf("%d",rev_array[i]);


    system("pause");
    return 0;
}