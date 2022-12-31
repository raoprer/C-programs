#include<stdio.h>
#include<string.h>

int main()
{
    int a,b;
    char str[10][10]={"one","two","three","four","five","six","seven","eight","nine"};
    printf("Enter the lower and upper limits");
    scanf("%d %d",&a,&b);
    for(int i=a;i<=b;i++)
    {
        printf("%s",str[i-1][5]);
    }
    return 0;
}
