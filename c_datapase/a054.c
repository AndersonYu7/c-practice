#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int main()
{
    int sum = 0;

    char input[9];
    int m[26];
    m['A' - 65] = 1;
    m['B' - 65] = 10;
    m['C' - 65] = 19;
    m['D' - 65] = 28;
    m['E' - 65] = 37;
    m['F' - 65] = 46;
    m['G' - 65] = 55;
    m['H' - 65] = 64;
    m['I' - 65] = 39;
    m['J' - 65] = 73;
    m['K' - 65] = 82;
    m['L' - 65] = 2;
    m['M' - 65] = 11;
    m['N' - 65] = 20;
    m['O' - 65] = 48;
    m['P' - 65] = 29;
    m['Q' - 65] = 38;
    m['R' - 65] = 47;
    m['S' - 65] = 56;
    m['T' - 65] = 65;
    m['U' - 65] = 74;
    m['V' - 65] = 83;
    m['W' - 65] = 21;
    m['X' - 65] = 3;
    m['Y' - 65] = 12;
    m['Z' - 65] = 30;

    char voc[27] = {'a','A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z'};
    
    gets(input);

    for(int i=0;i<8;i++){
        sum = sum + (input[i]-48)*(8-i);
    }
    

    for(int j=0;j<26;j++){
        if((m[j]+sum)%10 == 58 - input[8]) printf("%c",voc[j+1]);

        else if((m[j]+sum)%10 == 0 && input[8] == 48){
            printf("%c",voc[j+1]);
        }
    }


    system("pause");
    return 0;
}