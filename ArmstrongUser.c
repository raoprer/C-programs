#include<stdio.h>
#include<math.h>

int main()
{
    int num, rightmost, n, sumCube=0;
    printf("Enter a number ");
    scanf("%d", &num);
    n=num;
    while(n>0)
    {
        rightmost=n%10;
        sumCube+=pow(rightmost,3);//pow() can be used for int as well
        n/=10;
    }
    if(sumCube==num)
        printf("%d is an Armstrong number", num);
    else
        printf("%d is not an Armstrong number", num);
    return 0;
}
