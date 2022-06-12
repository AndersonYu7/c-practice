#include <stdio.h>
#include <stdlib.h>

int median(int n[], int num)
{
    return num%2 == 0 ? (n[num/2]+n[num/2-1])/2 : n[num/2];
}

void bubble_sort(int n[], int num)
{
    for(int i=0;i<num-1;i++){
        for(int j=0;j<num-1-i;j++){
            if(n[j] > n[j+1]){
                int temp = n[j];
                n[j] = n[j+1];
                n[j+1] = temp;
            }
        }
    }
}

void main()
{
    int test_num;
    scanf("%d",&test_num);

    while(test_num--){
        int neighbor_num;
        scanf("%d",&neighbor_num);
        
        int neighbor_address[neighbor_num];
        for(int i=0;i<neighbor_num;i++) scanf("%d",&neighbor_address[i]);

        bubble_sort(neighbor_address,neighbor_num);

        int new_home = median(neighbor_address,neighbor_num);
        int distance = 0;
        for(int i=0;i<neighbor_num;i++) distance += abs(new_home - neighbor_address[i]);

        printf("%d\n",distance);
    }

    system("pause");
}