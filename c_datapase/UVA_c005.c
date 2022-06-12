#include <stdio.h>
#include <stdlib.h>

void main()
{
    int how_many_test_material;
    scanf("%d",&how_many_test_material);

    while(how_many_test_material--){
        long long int num;
        scanf("%lld",&num);

        long long int arr[num][3];
        for(int i=0;i<num;i++){
            for(int j=0;j<3;j++){
                scanf("%lld",&arr[i][j]);
            }
        }

        long long int sum = 0;
        for(int i=0;i<num;i++) sum+=arr[i][0] * arr[i][2];

        printf("%lld\n",sum);
    }
    
    system("pause");
}