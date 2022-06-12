#include <stdio.h>
#include <stdlib.h>

int get_min_range(int list[], int first, int last);

void select_sort(int list[], int n)
{
    int fill , temp, index_of_min;

    for(fill = 0;fill<n-1;++fill){
        index_of_min = get_min_range(list, fill, n-1);

        if(fill != index_of_min){
            temp = list[index_of_min];
            list[index_of_min] = list[fill];
            list[fill] = temp;
        }
    }
}

int get_min_range(int list[], int first, int last)
{
    int i, min_index, min_value;
    min_index = first;
    min_value = list[first];
    for(i = first+1;i<=last;i++){
        if(min_value > list[i]){
            min_index = i;
            min_value = list[i];
        }
    }
    return min_index;
}

void print_array(int list[], int n)
{
    int i;
    for(i=0;i<n;i++){
        printf("%2d ",list[i]);
    }
    puts("");
}

int main()
{
    int x[11] = {20,11,30,15,17,9,5,1,32,16,28};
    int i;
    print_array(x,11);
    select_sort(x,11);
    print_array(x,11);

    system("pause");
    return 0;
}