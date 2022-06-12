#include <stdio.h>
#include <stdlib.h>

void main()
{
    int student_num;
    scanf("%d",&student_num);

    int arr[student_num];
    int *ptr;
    for(ptr = arr;ptr!=&arr[student_num];ptr++) scanf("%d",&*ptr);

    for (int i = 1; i < student_num; ++i) { //find MAX
        if (arr[0] < arr[i]) {
        arr[0] = arr[i];
        }
    }

    printf("%d",arr[0]);
    
    system("pause");
}