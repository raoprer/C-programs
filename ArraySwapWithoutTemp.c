#include<stdio.h>

int main()
{
    int n,a1[10],a2[10];
    printf("Enter the number of elements of both the arrays: ");
    scanf("%d",&n);
    printf("Enter the elements of the first array\n");
    for(int i=0;i<n;i++)
        scanf("%d",&a1[i]);
    printf("Enter the elements of the second array\n");
    for(int i=0;i<n;i++)
        scanf("%d",&a2[i]);
    //swap
    for(int i=0;i<n;i++)
    {
        a1[i]=a1[i]+a2[i];
        a2[i]=a1[i]-a2[i];
        a1[i]=a1[i]-a2[i];
    }
    //print
    printf("After swapping\n");
    for(int i=0;i<n;i++)
        printf("%d   ",a1[i]);
    printf("\n");
    for(int i=0;i<n;i++)
        printf("%d   ",a2[i]);
    return 0;
}
