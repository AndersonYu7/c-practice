#include <stdlib.h>
#include <stdio.h>

//use rand() to avoid the repeat number
//use the tree method to find the correct answer
//after using the loop to find all possible answers, find the maximum value
//too slow, and there are more method better than I edit

int main()
{
    int n,k;
    scanf("%d %d",&n,&k);

    int random[n],mirror_random[n],A[n],rev_A[n],mirror_A[n],last_A[n],sum[n-k-2],final[n];
    int count = k+1,final_count = 0,sum_count;

    for(int i=0;i<n;i++){
        scanf("%d",&A[i]);
        random[i] = rand();
    }

    for(int i=0;i<n;i++){
        A[i]*=random[i];
    }
    for(int i=0;i<n-k-1;i++) sum[i] = 0;

    for(int i=0;i<n;i++){
        last_A[i] = A[i]/random[i];
    }

    for(int tst=0;tst<n;tst++){
        for(int i=0;i<n;i++){
            mirror_A[i] = A[i];
            mirror_random[i] = random[i];
        }

        rev_A[0] = A[0];
        for(int i=1;i<n;i++) rev_A[i] = A[n-i];

        sum_count = 0;
        for(int i=0;i<n-k-1;i++){
            for(int j=0;j<n-k-1;j++){
                if(A[count+i]==rev_A[count+j]) sum[sum_count] = A[count+i]/random[count+i];
                else continue;
                sum_count++;
            }
        }

        for(int i=0;i<n-k-2;i++) sum[i]+=A[0]/random[0]; 

        for(int i=0;i<n-k-2;i++) final[final_count]=sum[i];
        final_count++;

        int t = A[n-1],u = random[n-1];                              
        for(int i=0;i<n;i++){
            A[i+1] = mirror_A[i];
            random[i+1] = mirror_random[i];
        }
        A[0] = t;
        random[0] = u;
    }

    for(int i=0;i<n-1;i++){
        for(int j=0;j<n-1-i;j++){
            if(final[j]>final[j+1]){
                int c=final[j];
                final[j]=final[j+1];
                final[j+1]=c;
            }
        }
    }

    for(int i=0;i<n-1;i++){
        for(int j=0;j<n-1-i;j++){
            if(last_A[j]>last_A[j+1]){
                int d=last_A[j];
                last_A[j]=last_A[j+1];
                last_A[j+1]=d;
            }
        }
    }

    if(final[n-1]!=EOF) printf("%d",final[n-1]);
    else printf("%d",last_A[n-1]);
    puts("");

    system("pause");
    return 0;
}