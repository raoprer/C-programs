#include<stdio.h>
#include<math.h>
#define PI 3.149

int main()
{
    float x, sum=0, cterm=0,pterm=0;
    int n;
    printf("Enter the angle in degrees");
    scanf("%f",&x);
    printf("Enter the number of terms");
    scanf("%d",&n);
    x*=PI/180.0;
    sum=x;
    pterm=x;
    for(int i=2; i<=n; i++)
    {
        cterm=(pterm*(-1)*x*x)/((2*i+1)(2*i));
        pterm=cterm;
        sum=sum+term;
    }
    printf("Sin(%f) = %.4f",x,sum);
    printf("Actual value is %f",sin(x));
    return 0;
}
