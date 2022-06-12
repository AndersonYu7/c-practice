#include <stdio.h>
#include <stdlib.h>

int main()
{
    char voc[26] = {'A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z'};
    int a,b,scope;
    scanf("%d %d %d",&a,&b,&scope);

    int sum = 0;
    for(int i=1;i<=scope;i++) if(i%a==0 || i%b==0) sum+=i;

    while(sum>26) sum-=26;
    printf("%c",voc[sum-1]);

    system("pause");
    return 0;
}