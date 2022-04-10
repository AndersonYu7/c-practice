#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int start,num,end;
    int len=0,dn_sum = 0;
    int copy_num;
    int judge = 0;


    scanf("%d %d",&start,&end);

    for(int i=start;i<=end;i++){
        num = i;
        copy_num = i;
        while(num>0){       //計算幾位
            num/=10;
            len++;
        }
                
        int digits_num[len];
        for(int j=0;j<len;j++){                 //運算所有位數的n次方
            digits_num[j] = copy_num%10;
            copy_num/=10;
            dn_sum+=(pow(digits_num[j],len));
            
        }    

        if(dn_sum == i){            //判斷所有位數的n次方是否=自己本身
            printf("%d ",i);
            judge = 1;
        }

        len = 0;                //初始化
        dn_sum = 0; 
    }
    if(judge == 0) printf("none");  //如果判斷結果都為否 則輸出none

    system("pause");
    return 0;
}