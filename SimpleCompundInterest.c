#include<stdio.h>
#include<math.h>

void SI_CI(float p,int t,float r,float* SI,float* CI)
{
    *SI=p*t*r/100;
    *CI=p*(pow((1+r/100),t))-p;
}

int main()
{
    int t;
    float p,r,SI,CI;
    printf("Enter the values of Principal,Time and Rate\n");
    scanf("%f %d %f",&p,&t,&r);
    SI_CI(p,t,r,&SI,&CI);
    printf("Simple interest=%f\nCompound interest=%f",SI,CI);
    return 0;
}
