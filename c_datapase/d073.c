#include <stdio.h>
#include <stdlib.h>

int judge(int n);
void main()
{
    int student_id;
    scanf("%d",&student_id);
    printf("%d",judge(student_id));

    system("pause");
}

int judge(int n)
{
    return n%3!=0 ? n/3+1 : n/3;
}