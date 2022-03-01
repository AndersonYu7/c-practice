#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int main()
{
    char a[1000];
    char b[1000];
    
    while(scanf("%s",a)!=EOF && scanf("%s",b)!=EOF){

        int n1 = strlen(a);
        int n2 = strlen(b);

        int a_ans[26] = {0};
        int b_ans[26] = {0};

        int min = 0;


        for(int i=0;i<n1;i++){
            a_ans[a[i]-'a']++;
        }

        for(int j=0;j<n2;j++){
            b_ans[b[j]-'a']++;
        }

        for(int i=0;i<26;i++){
            if(a_ans[i]<=b_ans[i]) min = a_ans[i];
            else min = b_ans[i];

            for(int j=0;j<min;j++){
                printf("%c",i+97);
            }
        }
        puts("");
    }
    system("pause");
    return 0;
}
