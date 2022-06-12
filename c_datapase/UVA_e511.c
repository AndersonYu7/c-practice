//(MAX - min)*2
#include <stdio.h>
#include <stdlib.h>

int min(int [],int );
int max(int [],int );
void main()
{
    int num;
    scanf("%d",&num);
    while(num--){
        int arr_num;
        scanf("%d",&arr_num);

        int arr[arr_num];
        int *ptr;
        for(ptr = arr;ptr != &arr[arr_num];ptr++) scanf("%d",&*ptr);

        printf("%d\n",(arr[max(arr, arr_num)] - arr[min(arr, arr_num)])*2);
    }
    
    system("pause");
}

int min(int list[],int last)
{
    int i, min_index, min_value;
    min_index = 0;
    min_value = list[0];
    for(i = 0+1;i<last;i++){
        if(min_value > list[i]){
            min_index = i;
            min_value = list[i];
        }
    }
    return min_index;
}

int max(int list[],int last)
{
    int i, max_index, max_value;
    max_index = 0;
    max_value = list[0];
    for(i = 0+1;i<last;i++){
        if(max_value < list[i]){
            max_index = i;
            max_value = list[i];
        }
    }
    return max_index;
}