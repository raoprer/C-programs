#include<stdio.h>
int pow(int b,int p)
{
    if(p==0)
        return 1;
    return b*pow(b,p-1);
}
int main()
{
    int base,power;
    printf("Enter the base and the power ");
    scanf("%d %d",&base,&power);
    printf("%d ^ %d = %d",base,power,pow(base,power));
    return 0;
}
