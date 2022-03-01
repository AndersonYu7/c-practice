#include <stdlib.h>
#include <stdio.h>

int main()
{
    int n,m,i;

    while((scanf("%d %d",&n,&m))!=EOF){
        for(i=1;;i++){
            if(i*(2*n+i-1)/2>m){      //arithmetic progression Sn formula
                printf("%d\n",i);
                break;
            }
        }
    }

    system("pause");
    return 0;
}