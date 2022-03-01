#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int main()
{
    char a[1000];
    char b[1000];
    char c[1000];
    char voc[26] = {'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z'};
    

    while(scanf("%s",a)!=EOF && scanf("%s",b)!=EOF){

        int n1 = strlen(a);
        int n2 = strlen(b);

        for(int i=0;i<n2-1;i++){
            for(int j=0;j<n2-1-i;j++){
                if(b[j] > b[j+1]){
                    char t = b[j];
                    b[j] = b[j+1];
                    b[j+1] = t;
                }
            }
        }

        int count = 0;

        for(int i=0;i<n2;i++){
            for(int j=0;j<n1;j++){
                if(b[i] == a[j]){
                    c[count] = b[i];
                    count++;
                    
                }
            }
        }

        for(int i=0;i<count;i++){
            if(c[i]==c[i+1]) continue;
            else printf("%c",c[i]);
        }
        puts("");
    }

    system("pause");
    return 0;
}
