#include <stdio.h>
#include <stdlib.h>

int judge(int [], int );
int main()
{
    int how_many;
    while(scanf("%d",&how_many)!=EOF){
        int num[how_many];
        for(int i=0;i<how_many;i++) scanf("%d",&num[i]);

        if(judge(num,how_many)==1) printf("Jolly\n");
        else printf("Not jolly\n");
    }

    system("pause");
    return 0;
}

int judge(int num[], int n)
{
    int diff[n-1];
    for(int i=1;i<=n-1;i++) diff[i-1] = i;

    
    for(int i=0;i<n-1;i++){
        for(int j=0;j<n-1;j++){
            if(abs(num[i]-num[i+1])==diff[j]) diff[j] = -1;
        }
    }

    int flag = 0;
    for(int i=0;i<n-1;i++){
        if(diff[i]==-1) flag = 1;
        else flag = 0;
    }

    return flag;
}