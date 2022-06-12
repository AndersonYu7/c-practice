#include <stdio.h>
#include <stdlib.h>

int main()
{
    int v[5] = {1,2,3,4,5};
    int *n = v;             //*n = v -> *n = &v[0]
    for(int i=0;i<5;i++){
        printf("%d\n",*(n+i));
    }

    // for(n = v;n!=&v[5];n++){      // = while(n!=v+5)
    //     printf("%d\n",*n);
    // }


    while(n != v + 5){
        printf("%d\n",*n++);
    }


    system("pause");
    return 0;
}