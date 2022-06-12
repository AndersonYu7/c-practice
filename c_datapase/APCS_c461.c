#include <stdio.h>
#include <stdlib.h>

void f(int *,int *,int *);
int main()
{
    int a,b,c;
    scanf("%d %d %d",&a,&b,&c);
    int *p_a = &a,*p_b = &b,*p_c = &c;
    f(p_a,p_b,p_c);

    int and = a&&b,or = a||b, xor = a^b;

    int flag = 0;
    if(and==c){
        printf("AND\n");
        flag = 1;
    }
    if(or==c){
        printf("OR\n");
        flag = 1;
    }
    if(xor==c){
        printf("XOR\n");
        flag = 1;
    }

    if(flag == 0) printf("IMPOSSIBLE");
    
    system("pause");
    return 0;
}

void f(int *a,int *b,int *c)
{
    if(*a!=0) *a = 1;
    else *a = 0;

    if(*b!=0) *b = 1;
    else *b = 0;

    if(*c!=0) *c = 1;
    else *c = 0;
}