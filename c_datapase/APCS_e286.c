#include <stdio.h>
#include <stdlib.h>

void main()
{
    int main_team_1[4], guest_team_1[4], main_team_2[4], guest_team_2[4];
    int main_team_1_sum = 0, guest_team_1_sum = 0, main_team_2_sum = 0, guest_team_2_sum = 0;

    for(int i=0;i<4;i++){
        scanf("%d",&main_team_1[i]);
        main_team_1_sum += main_team_1[i];
    }
    for(int i=0;i<4;i++){
        scanf("%d",&guest_team_1[i]);
        guest_team_1_sum += guest_team_1[i];
    }
    for(int i=0;i<4;i++){
        scanf("%d",&main_team_2[i]);
        main_team_2_sum += main_team_2[i];
    }
    for(int i=0;i<4;i++){
        scanf("%d",&guest_team_2[i]);
        guest_team_2_sum += guest_team_2[i];
    }

    int judge = 0;
    if(main_team_1_sum > guest_team_1_sum && main_team_2_sum > guest_team_2_sum) judge = 1;
    else if(main_team_1_sum < guest_team_1_sum && main_team_2_sum < guest_team_2_sum) judge = 0;
    else judge = 2;

    printf("%d:%d\n",main_team_1_sum,guest_team_1_sum);
    printf("%d:%d\n",main_team_2_sum,guest_team_2_sum);
    if(judge == 1) printf("Win");
    else if(judge == 0) printf("Lose");
    else printf("Tie");


    system("pause");
}