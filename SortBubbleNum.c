#include<stdio.h>

int main()
{
    int n,a[20],temp;
    printf("Enter the number of elements\n");
    scanf("%d",&n);
    printf("Enter the elements\n");
    for(int i=0;i<n;i++)
        scanf("%d",&a[i]);

    //BUBBLE SORT
    for(int i=0;i<n-1;i++)//Pass count
        for(int j=0;j<n-i-1;j++)//bubble
        {
            if(*(a+j)>*(a+j+1))
            {
                temp=*(a+j);
                *(a+j)=*(a+j+1);
                *(a+j+1)=temp;
            }
        }
    printf("The sorted array is\n");
    for(int i=0;i<n;i++)
        printf("%d\n",a[i]);
    return 0;
}
