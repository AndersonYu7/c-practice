#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <math.h>

int main()
{
    char voc[7];
    int password[6];

    gets(voc);

    for(int i=0;i<6;i++){
        password[i] = fabs(voc[i+1]-voc[i]);
    }

    for(int j=0;j<6;j++) printf("%d",password[j]);


    system("pause");
    return 0;
}