#include <stdio.h>
#include <stdlib.h>

void main()
{
    int number;
    scanf("%d",&number);
    
    if(number<=2500){
        if(number%25!=0) printf("1 %d %d",number/25+1,number%25);
        else printf("1 %d 25",number/25);
    }
    else if(2501<=number && number<=7500){
        if((number-2500)%50!=0) printf("2 %d %d",(number-2500)/50+1,(number-2500)%50);
        else printf("2 %d 50",(number-2500)/50);
    }
    else{
        if((number-7500)%25!=0) printf("3 %d %d",(number-7500)/25+1,(number-7500)%25);
        else printf("3 %d 25",(number-7500)/25);
    }

    system("pause");
}