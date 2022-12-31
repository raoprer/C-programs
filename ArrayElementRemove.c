#include<stdio.h>

int main()
{
    int n,i,a[10],pos;

    printf("Enter the number of elements in the array: ");
    scanf("%d",&n);
    printf("\nEnter %d elements\n",n);
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);

    printf("\nEnter the position of the element to be deleted: ");
    scanf("%d",&pos);//in human readable form

    for(i=pos-1;i<n-1;i++){
        a[i]=a[i+1];
    }
    n--;

    printf("\nThe modified array is\n");
    for(i=0;i<n;i++)
        printf("%d ",a[i]);

    return 0;
}
