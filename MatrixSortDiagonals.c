#include<stdio.h>

void sortdig(int a[][20],int m,int i,int j)
{
    int k;
    for()
}

int main()
{
    int i,j,m,a[20][20],temp[20];

    printf("Enter the order of the matrix: ");
    scanf("%d",&m);

    printf("\nEnter %d elements\n",m*m);
    for(i=0;i<m;i++)
        for(j=0;j<n;j++)
            scanf("%d",&a[i][j]);
    for(j=0;j<m;j++){
        i=0;//only 1st row elements
        for(j=0;j<n;j++){
            temp[j]=a[i][j];
            i++;
        }
        sortdig(temp);
    }

    for(i=0;i<m;i++){
        j=0;//only 1st column elements
        for(i=0;i<m;i++){
            temp[i]=a[i][j];
            j++;
        }
    }

    printf("\nThe modified array is\n");
    for(i=0;i<m;i++){
        for(j=0;j<m;j++)
            printf("%d ",a[i][j]);
        printf("\n");
    }

}
