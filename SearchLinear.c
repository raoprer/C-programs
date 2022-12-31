#include<stdio.h>

int main()
{
    int n, a[20],key,flag=0;
    printf("Enter the numbers of numbers\n");
    scanf("%d",&n);
    printf("Enter %d numbers\n",n);
    for(int i=0;i<n;i++)
        scanf("%d",&a[i]);
    printf("Enter the KEY element\n");
    scanf("%d",&key);

    for(int i=0; i<n;i++)
    {
        if(key==a[i])
            flag=1;
            break;
        }
    if(flag)
        printf("%d is found",key);
    else
        printf("%d is not found",key);
    return 0;

}
