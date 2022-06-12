#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n[2];
    
    while(scanf("%d %d",&n[0],&n[1])!=EOF){
        
        printf("%d\n",n[0]*n[1]-1);
    }

    system("pause");
    return 0;
}