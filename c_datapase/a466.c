#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    int n,wrong_cont;
    scanf("%d",&n);

    char s[5],s2[3] = "one";
    while(n--){
        wrong_cont = 0;
        scanf("%s",s);

        if(strlen(s)!=3) printf("3\n");
        else{
            for(int i=0;i<3;i++) if(s[i]!=s2[i]) wrong_cont++;

            if(wrong_cont>1) printf("2\n");
            else printf("1\n");
        }
    }


    system("pause");
    return 0;
}