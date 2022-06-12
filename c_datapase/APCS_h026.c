/*
當哥哥-妹妹的數字為-2,-3,5時 win
當哥哥-妹妹的數字為2,3,-5時 lose

先判斷哥哥第一個出的拳是否與妹妹相同
1.同樣的話 再去判斷在第幾局有輸贏或是都平手
2.不同的話 直接判斷是哥哥贏還妹妹贏

只比一局且平手 在1.處判斷

每次哥哥的拳是跟妹妹的下一個做比較
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
//=================初始化與輸入變數====================
    int bro,n;
    scanf("%d %d",&bro,&n);

    int sis[n];
    for(int i=0;i<n;i++) scanf("%d",&sis[i]);

    printf("%d ",bro);

    int first_bro = bro;
    int i;
    int win = 0,lose = 0;
    int first_win = 0,first_lose = 0;
//=====================================================
//==================主程式:判斷猜拳=====================
    for(i=0;i<n;i++){
        if(first_bro-sis[0]==0){    //1.同樣的話~
            if(sis[i]==sis[i-1]&&i!=0&&n!=1){   //如果妹妹兩次都出相同的拳 哥哥會出打敗妹妹前兩輪的拳    
                if(sis[i]==0) bro = 5;
                else if(sis[i]==2) bro = 0;
                else bro = 2;
            }
            else bro = sis[i];  //其他的話 哥哥就出妹妹上一輪的拳

            if(i!=n-1) printf("%d ",bro);

            if(bro-sis[i+1]!=0){    //判斷輸贏
                if(n!=1){       //不能是只比一局 不然會判斷失誤(因為bro是跟下一個sis做比較)
                    if(bro-sis[i+1]==-2 || bro-sis[i+1] == -3 || bro-sis[i+1] == 5 && i!=n-1) win = 1;
                    else if(bro-sis[i+1]==2 || bro-sis[i+1] == 3 || bro-sis[i+1] == -5 && i!=n-1) lose = 1;
                }
                break;  
            }
        }
        else{   //判斷第一局就分出勝負
            if(first_bro-sis[0]==-2 || first_bro-sis[0] == -3 || first_bro-sis[0] == 5) first_win = 1;
            else first_lose = 1;
        }
    }
//========================================================
//======================輸出值============================
    if(win == 1 && first_lose == 0 && first_win == 0) printf(": Won at round %d",i+2);
    else if(lose == 1 && first_lose == 0 && first_win == 0) printf(": Lost at round %d",i+2);
    else if(first_lose == 1 && lose == 0 && win == 0) printf(": Lost at round 1");
    else if(first_win == 1 && lose == 0 && win == 0) printf(": Won at round 1");
    else printf(": Drew at round %d",n);
//========================================================

    system("pause");
    return 0;
}