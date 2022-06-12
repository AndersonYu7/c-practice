#include <stdio.h>
#include <stdlib.h>

void change(int *a, int *b, int *c);
void main()
{
    int a, b, c;
    scanf("%d %d %d",&a, &b, &c);
    change(&a, &b, &c);

    printf("%d %d %d\n",a, b, c);
    if(a + b > c){
        if(a*a + b*b > c*c) printf("Acute");
        else if(a*a + b*b == c*c) printf("Right");
        else printf("Obtuse");
    }
    else printf("No");

    system("pause");
}

void change(int *a, int *b, int *c)
{
    int temp;
    if(*a > *b){
        temp = *a;
        *a = *b;
        *b = temp;
    }
    if(*a > *c){
        temp = *a;
        *a = *c;
        *c = temp;
    }
    if(*b > *c){
        temp = *b;
        *b = *c;
        *c = temp;
    }
}