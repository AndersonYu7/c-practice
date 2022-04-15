/*
從頭開始判斷 當朋友編號與自己不同時 開始尋找群體
並且將找過的設成-1 群體的頭設成自己編號
當朋友編號等於自己編號時 count++
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int size;
    scanf("%d",&size);
    
    int parent[size];
    for(int i=0;i<size;i++) scanf("%d",&parent[i]);

    int count = 0;
    for(int i=0;i<size;i++){
        while(parent[i]!=i&&parent[i]!=-1){
            int x = parent[i];
            parent[i] = parent[parent[i]];
            parent[x] = -1;
        }
        if(parent[i]==i) count++;
    }
    printf("%d",count);

    system("pause");
    return 0;
}