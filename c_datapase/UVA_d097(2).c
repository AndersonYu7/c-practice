#include <stdlib.h>
#include <stdio.h>

void bubble_sort(int [], int );
int main()
{
    int how_many;
    while(scanf("%d",&how_many)!=EOF){
        int num[how_many];
        for(int i=0;i<how_many;i++) scanf("%d",&num[i]);

        int diff[how_many-1];
        for(int i=0;i<how_many-1;i++){
            diff[i] = abs(num[i] - num[i+1]);
        }
        bubble_sort(diff,how_many-1);

        int flag = 1;
        for(int i=1;i<=how_many-1;i++){
            if(diff[i-1]!=i) flag = 0;
        }

        if(flag) printf("Jolly\n");
        else printf("Not jolly\n");
    }


    system("pause");
    return 0;
}

void bubble_sort(int num[], int n)
{
    for(int i=0;i<n-1;i++){
        for(int j=0;j<n-1-i;j++){
            if(num[j]>num[j+1]){
                int temp = num[j];
                num[j] = num[j+1];
                num[j+1] = temp;
            }
        }
    }
}