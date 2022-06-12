#include <stdio.h>
#include <stdlib.h>

int main()
{
    char letter[16];
    letter[5] = 'A';
    letter[7] = 'B';
    letter[2] = 'C';
    letter[13] = 'D';
    letter[8] = 'E';
    letter[12] = 'F';   

    int n;
    while(scanf("%d",&n)!=EOF){
        for (int i=0; i<n; i++){
            int x = 0, tmp;
            for (int j=0; j<4; j++){
                scanf("%d",&tmp);
                x = 2 * x + tmp;  //二進制轉十進制
            }
            printf("%c",letter[x]);
        }
        puts("");
    }

    system("pause");
    return 0;
}