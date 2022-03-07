#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,m,p,t,x,y;
    long long int sum = 0;

    scanf("%d %d %d %d",&n,&m,&p,&t);
    
    long long int area[n][m];
    long long int area_2[n][m];

    for(int i=0;i<n;i++){        //area initalization
        for(int j=0;j<m;j++){
            area[i][j] = 0;
        }
    }

    while(p--){
        scanf("%d %d",&x,&y);    
        area[x][y] = 1;
    }

    while(t--){
        for(int i=0;i<n;i++){              //area -> area_2
            for(int j=0;j<m;j++){
                area_2[i][j] = area[i][j];
            }
        }

        for(int i=0;i<n;i++){            //popularity calculations
            for(int j=0;j<m;j++){
                area[i][j] += area_2[i-1][j] + area_2[i+1][j] + area_2[i][j-1] + area_2[i][j+1];

                if(i-1 < 0){
                    area[i][j] -= area_2[i-1][j];
                }

                if(j-1 < 0){
                    area[i][j] -= area_2[i][j-1];
                }

                if(i+2 > n){
                    area[i][j] -= area_2[i+1][j];
                }

                if(j+2 > m){
                    area[i][j] -= area_2[i][j+1];
                }
            }
        }
    }

    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            sum += area[i][j];
        }
    }

    printf("%lld",sum);


    system("pause");
    return 0;
}