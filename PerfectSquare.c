#include<stdio.h>
#include<math.h>

int main()
{
    float n,fsqr;
    int isqr,nxtsq;

    printf("Enter the number: ");
    scanf("%f",&n);

    fsqr=sqrt(n);//step 1
    isqr=fsqr;//step2

    if(isqr==fsqr)//step3
        printf("\n%f is a perfect square",n);

    else{
        printf("\n%f is not a perfect square",n);
        nxtsq=n;
        while(isqr!=fsqr){
            nxtsq+=1;
            fsqr=sqrt(nxtsq);
            isqr=fsqr;
        }
        printf("\nThe nearest next square is %d",nxtsq);
    }
    return 0;
}
