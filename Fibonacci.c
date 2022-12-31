#include<stdio.h>

void fibo(int n)
{
    int first=0,sec=1,next;
    printf("%d\n%d\n",first,sec);
    for(int i=0;i<n-2;i++)
    {
        next=first+sec;
        printf("%d\n",next);
        first=sec;
        sec=next;
    }
}
int main()
{
    int lim;
    printf("Enter the number\n");
    scanf("%d",&lim);
    fibo(lim);
    return 0;
}
