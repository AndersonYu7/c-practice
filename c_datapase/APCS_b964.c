#include <stdlib.h>
#include <stdio.h>

int main()
{
    int n;
    scanf("%d",&n);

    int grade[n];
    for(int i=0;i<n;i++) scanf("%d",&grade[i]);

    for(int i=0;i<n-1;i++){
        for(int j=0;j<n-1-i;j++){
            if(grade[j]>grade[j+1]){
                int x = grade[j];
                grade[j] = grade[j+1];
                grade[j+1] = x;
            }
        }
    }
    for(int i=0;i<n;i++) printf("%d ",grade[i]);
    puts("");

    int good=-1,bad=-1;
    for(int i=0;i<n;i++){
        if(grade[i]<60) bad = grade[i];
        else{
            good = grade[i];
            break;
        }
    }

    if(good!=-1 && bad!=-1){
        printf("%d\n",bad);
        printf("%d\n",good);
    }

    else if(good==-1 && bad!=-1){
        printf("%d\n",bad);
        printf("worst case");
    }

    else if(good!=-1 && bad==-1){
        printf("best case\n");
        printf("%d\n",good);
    }   
    
    system("pause");
    return 0;
}