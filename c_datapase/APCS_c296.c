/*
詳解:https://yuihuang.com/zj-c296/

以0-based的編號思考，取模計算較方便
總共經過K次爆炸，倒著還原過程
第K次爆炸後剩N-K人，幸運者經重新編號為0
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int N, M, K;
    scanf("%d %d %d",&N, &M, &K);
    
    int dp[N];
    dp[N-K] = 0;

    for (int i=N-K+1; i<=N; i++){
        dp[i] = (dp[i-1] + M) % i;  //每一次爆炸前，幸運者當下的新編號
    }
    printf("%d\n",dp[N] + 1);   //改回1-based的編號
 
    system("pause");
    return 0;
}