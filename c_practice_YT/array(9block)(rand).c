#include <stdlib.h>
#include <stdio.h>
#include <time.h>

void dim_1();
void dim_2();

int main()
{
    srand(time(NULL));

    dim_2();
    printf("\n\n");
    dim_1();



    system("pause");
    return 0;
}

void dim_2()
{
    

    int v[3][3] = {{1,2,3},
                   {4,5,6},
                   {7,8,9}};
    int k=0;

    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            int r = rand()%(9-k)+k;
            int m = r/3;    
            int n = r%3;    
            int t = v[i][j];
            v[i][j]=v[m][n];
            v[m][n]=t;
            k++;
        }
    }

    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            printf("%d ",v[i][j]);
        }
        puts("");
    }
}

void dim_1()
{
    

    int v[9] = {1,2,3,4,5,6,7,8,9};

    for(int i=0;i<9;i++){
        int m = rand()%(9-i) + i;
        int t = v[i];
        v[i] = v[m];
        v[m] = t;
    }


    for(int i=0;i<9;i++){
        printf("%d ",v[i]);
        if(i%3==2) puts("");
    }
}