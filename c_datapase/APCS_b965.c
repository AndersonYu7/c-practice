//c language killed, c++ can run
#include <stdio.h>
#include <stdlib.h>
#define L 10

int R, C, M;
int array[L][L], mk[L];
void un_flip();
void un_spin();
void main()
{
    while(scanf("%d %d %d",&R, &C, &M)){
        for(int i=0;i<R;i++){
            for(int j=0;j<C;j++){
                scanf("%d",&array[i][j]);
            }
        }
        for(int i=0;i<M;i++) scanf("%d",&mk[i]);

        for (int i = M - 1; i >= 0; i--) {
            if (mk[i] == 0) un_spin();
            else un_flip();
        }
        
        printf("%d %d\n", R, C);
        for (int i = 0; i < R; i++)
            for (int j = 0; j < C; j++) 
                printf(j == C - 1 ? "%d\n" : "%d ", array[i][j]);
    }
}

void un_flip()
{
    int x[L][L];
    for(int i=0;i<R/2;i++){
        for(int j=0;j<C;j++){
            int t = array[i][j];
            array[i][j] = array[R-1-i][j];
            array[R-1-i][j] = t;
        }
    }
}

void un_spin()
{
    int x[L][L];
    for(int i=0;i<R;i++){
        for(int j=0;j<C;j++){
            x[C-j-1][i] = array[i][j];
        }
    }
    int temp = R;
    R = C;
    C = temp;
    for(int i=0;i<R;i++){
        for(int j=0;j<C;j++){
            array[i][j] = x[i][j];
        }
    }
}