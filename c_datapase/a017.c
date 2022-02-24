#include <stdlib.h>
#include <stdio.h>
#include <string.h>


char input[1000];
int ns[1000] = {0};
int a;

int operation (int end)
{
    int value[1000]={0},count=1; 
    int sum = 0;

    if(ns[a]>0) value[0]=ns[a]; 

    for(;a<end;a++){
        if(ns[a]==-7) break; //)

        if(ns[a]==-6){ //(
            a++;
            value[count++] = operation(end);
        }
        
        if(ns[a]==-1){ //+
            if(ns[a+1]==-6){
                a+=2;
                value[count++] = operation(end);
            }
            else{
                value[count++] = ns[a+1];
            }
        }

        if(ns[a]==-2){ //-
            if(ns[a+1]==-6){
                a+=2;
                value[count++] = -operation(end);
            }
            else{
                value[count++] = -ns[a+1];
            }
        }

        if(ns[a]==-3){ //*
            if(ns[a+1]==-6){
                a+=2;
                value[count-1] *= operation(end);
            }
            else{
                value[count-1] *= ns[a+1];
            }
        }

        if(ns[a]==-4){ ///
            if(ns[a+1]==-6){
                a+=2;
                value[count-1] /= operation(end);
            }
            else{
                value[count-1] /= ns[a+1];
            }
        }

        if(ns[a]==-5){ //%
            if(ns[a+1]==-6){
                a+=2;
                value[count-1] %= operation(end);
            }
            else{
                value[count-1] %= ns[a+1];
            }
        }

        
    }

    for(int j=0;j<100;j++) sum=sum+value[j]; 

    return sum; 
    
}


int main()
{
    while(gets(input)){
        int num = 0;
        int count = 0;
        int flag = 0;
        a = 0;
        int n=strlen(input);


        for(int i=0;i<n;i++){
            
            if(input[i]<=57 && input[i]>=48){
                num = num*10 + input[i]- 48;
                flag = 1;
            }

            else if(input[i] == ' '){
                if(flag == 1) ns[count++] = num; 

                num = 0;
                flag = 0;
                
            }

            else if(input[i] == '+'){
                if(flag == 1) ns[count++] = num;

                num = 0;
                flag = 0;

                ns[count++] = -1;
            }

            else if(input[i] == '-'){
                if(flag == 1) ns[count++] = num;

                num = 0;
                flag = 0;

                ns[count++] = -2;
            }

            else if(input[i] == '*'){
                if(flag == 1) ns[count++] = num;

                num = 0;
                flag = 0;

                ns[count++] = -3;
            }

            else if(input[i] == '/'){
                if(flag == 1) ns[count++] = num;

                num = 0;
                flag = 0;

                ns[count++] = -4;
            }

            else if(input[i] == '%'){
                if(flag == 1) ns[count++] = num;

                num = 0;
                flag = 0;

                ns[count++] = -5;
            }

            else if(input[i] == '('){
                if(flag == 1) ns[count++] = num;

                num = 0;
                flag = 0;

                ns[count++] = -6;
            }

            else if(input[i] == ')'){
                if(flag == 1) ns[count++] = num;

                num = 0;
                flag = 0;

                ns[count++] = -7;
            } 

        }
            
        if(num!=0||flag==1) ns[count++]=num;
        printf("%d",operation(count));
        puts("");
        
    }
    
    system("pause");
    return 0;
}