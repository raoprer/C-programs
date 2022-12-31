#include<stdio.h>

int main()
{
    int n,low,high,mid,a[20],key;
    printf("Enter the number of elements\n");
    scanf("%d",&n);
    printf("Enter the sorted array\n");
    for(int i=0;i<n;i++)
        scanf("%d",&a[i]);
    printf("Enter the KEY element\n");
    scanf("%d",&key);
    low=0;
    high=n-1;

    while(key!=a[mid] && low<=high)
    {
        mid=(low+high)/2;
        if(key<a[mid])
            high=mid-1;
        else if(key>a[mid])
            low=mid+1;
    }
    if(a[mid]==key)
        printf("%d is found",key);
    else
        printf("%d is not found",key);
    return 0;
}
