#include <stdlib.h>
#include <stdio.h>

int main()
{
    int N;
    int row,column;

    scanf("%d",&N);
    for(int i=0;i<N;i++){
        scanf("%d %d",&row,&column);

        int array[row][column];

        for(int i=0;i<row;i++){
            for(int j=0;j<column;j++){
                scanf("%d",&array[i][j]);
            }
        }

        int rev_array[column][row];

        for(int i=0;i<column;i++){
            rev_array = 
        }
        
    }
    
    
    system("pause");
    return 0;
}