#include<stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){

    char str[10];
    int m[26];
    int num[9];
    int sum,total = 0;
    

    m['A'-65] = 10;
    m['B'-65] = 11;
    m['C'-65] = 12;
    m['D'-65] = 13;
    m['E'-65] = 14;
    m['F'-65] = 15;
    m['G'-65] = 16;
    m['H'-65] = 17;
    m['I'-65] = 34;
    m['J'-65] = 18;
    m['K'-65] = 19;
    m['L'-65] = 20;
    m['M'-65] = 21;
    m['N'-65] = 22;
    m['O'-65] = 35;
    m['P'-65] = 23;
    m['Q'-65] = 24;
    m['R'-65] = 25;
    m['S'-65] = 26;
    m['T'-65] = 27;
    m['U'-65] = 28;
    m['V'-65] = 29;
    m['W'-65] = 32;
    m['X'-65] = 30;
    m['Y'-65] = 31;
    m['Z'-65] = 33;



    scanf("%s",str);  

    int a = str[0]-65;
    for(int i=0;i<9;i++){
        num[i]=str[i+1]-48;
    }

    int trannum = m[a]%10*9 + m[a]/10;
    
    for(int i=0;i<9;i++){
        sum = num[i]*(8-i);
        total+=sum;
    }
    
    if((total + num[8] + trannum)%10==0) printf("real");
    
    else printf("fake");

    system("pause");
    return 0;

}