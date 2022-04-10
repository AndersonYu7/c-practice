/*
利用類似布林代數的方式讓測資不要重複判斷
多一個array來複製ans去做判斷
*/

#include <stdio.h>
#include <stdlib.h>
#define size 4

int main()
{
    int ans[size],input[size],copy_ans[size];
    int n;
    int judge = 1;

    while(scanf("%d %d %d %d",&ans[0],&ans[1],&ans[2],&ans[3])!=EOF){
        scanf("%d",&n);
    
        while(n--){
            int A=0,B=0;
            for(int i=0;i<4;i++) scanf("%d",&input[i]);    
            for(int i=0;i<4;i++) copy_ans[i] = ans[i];

            for(int i=0;i<4;i++){               //判斷幾個A
                if(input[i]==copy_ans[i]){
                    A++;
                    copy_ans[i] = -2;
                    input[i] = -1;
                }
            }
            
            for(int i=0;i<4;i++){               //判斷幾個B
                for(int j=0;j<4;j++){
                    if(input[i]==copy_ans[j]){
                        B++;
                        copy_ans[j] = -2;
                        input[i] = -1;
                    }
                }
            }
            printf("%dA%dB\n",A,B);
        }
    }

    system("pause");
    return 0;
}
