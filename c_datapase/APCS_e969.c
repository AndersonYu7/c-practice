#include <stdio.h>
#include <stdlib.h>

void main()
{
    int money, time, k; //k == 0 -> apple pie(32) k == 1 -> corp soup(55)
    scanf("%d %d %d",&money, &time, &k);

    int judge = 0;
    int cost[2] = {32,55};
    if(money - cost[k] < 0) printf("Wayne can't eat and drink.");
    else judge = 1;

    int t=0;
    while(judge == 1){
        if(money - cost[k] < 0) break;

        printf("%d: Wayne ",t);
        if(k==0) printf("eats an Apple pie, and now he ");
        else printf("drinks a Corn soup, and now he ");

        money-=cost[k];
        if(money == 0) printf("doesn't have money.\n");
        else if(money == 1) printf("has 1 dollar.\n");
        else  printf("has %d dollars.\n",money);

        k = 1-k;
        t+=time;
    }
    
    system("pause");
}