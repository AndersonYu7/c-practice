#include <stdlib.h>
#include <stdio.h>
#include <math.h>

void compute(float , float ,float );
int main()
{
    float a,b,c;
    scanf("%f %f %f",&a,&b,&c);

    compute(a,b,c);

    system("pause");
    return 0;
}

void compute(float x, float y,float z)
{
    float ans1 = (-y + sqrt(y*y-4*x*z))/(2*x);
    float ans2 = (-y - sqrt(y*y-4*x*z))/(2*x);

    if(ans1 < ans2 ){
        int t = ans1;
        ans1 = ans2;
        ans2 = ans1;
    }
    
    if((y*y-4*x*z) < 0) printf("Your equation has no root.");
    else printf("%.1f, %.1f",ans1,ans2);
}