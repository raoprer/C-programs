#include<stdio.h>

int main()
{
    int n,a[20],pos,small;
    printf("Enter the number of elements\n");
    scanf("%d",&n);
    printf("Enter %d elements\n",n);
    for(int i=0;i<n;i++)
        scanf("%d",&a[i]);

    //SELECTION SORT
    for(int i=0;i<n-1;i++)//Pass count
    {
        pos=i; small=a[i];
        for(int j=i+1;j<n;j++)
        {
            if(a[j]<small)
            {
                pos=j; small=a[j];
            }
        }
        a[pos]=a[i]; a[i]=small;//Write in terms of a[i]
    }
    printf("The sorted array is\n");
    for(int i=0;i<n;i++)
        printf("%d\n",a[i]);
    return 0;
}
