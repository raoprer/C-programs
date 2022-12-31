#include<stdio.h>
#include<math.h>

int main()
{
    int n,num,deg=0;
    printf("Enter the number\n");
    scanf("%d",&num);
    n=num;
    while(n>0)
    {
        n/=10;
        deg++;
    }
    deg-=1;
    printf("First digit= %d\n",num/(int)(pow(10,deg)));
    printf("Last digit= %d",num%10);
}
