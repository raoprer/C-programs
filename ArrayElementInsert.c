#include<stdio.h>

int main()
{
    int n,i,a[10],pos,ele;

    printf("Enter the number of elements in the array: ");
    scanf("%d",&n);
    printf("\nEnter %d elements\n",n);
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);

    printf("\nEnter the position of the element to be inserted: ");
    scanf("%d",&pos);//in human readable form
    printf("\nEnter the element to be inserted: ");
    scanf("%d",&ele);

    for(i=n;i>=pos-1;i--){
        a[i+1]=a[i];
    }
    a[pos-1]=ele;
    n++;

    printf("\nThe modified array is\n");
    for(i=0;i<n;i++)
        printf("%d ",a[i]);

    return 0;
}

