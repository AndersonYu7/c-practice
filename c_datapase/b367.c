#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,row,column;
    scanf("%d",&n);

    while(n--){
        scanf("%d %d",&row,&column);
        int array[row*column];

        for(int i=0;i<row*column;i++) scanf("%d",&array[i]);

        int judge[row*column];
        for(int i=0;i<row*column;i++) judge[i] = 0;
        for(int i=0;i<row*column;i++){
            if(array[i] == array[row*column-1-i]) judge[i]++;
        }

        int sum = 0;
        for(int i=0;i<row*column;i++){
            sum+=judge[i];
        }

        if(sum == row*column) printf("go forward");
        else printf("keep defending");
        puts("");
    }

    system("pause");
    return 0;
}