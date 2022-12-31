#include<stdio.h>
#include<stdlib.h>

int main()
{
    int n,i,j,p,q,isUnique=1,a[10][10],psum=0,ssum=0,rsum[10],csum[10];
    printf("Enter the order of the magic square\n");
    scanf("%d",&n);
    printf("Enter the elements of the magic square\n");
    for(i=0;i<n;i++)
        for(j=0;j<n;j++)
            scanf("%d",&a[i][j]);
    //TO CHECK IF THE ELEMENTS ARE UNIQUE
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            for(p=i;p<n;p++)
            {
                for(q=j+1;q<n;q++)
                {
                    if(a[i][j]==a[p][q])
                    {
                        isUnique=0;
                        break;
                    }
                }
                if(isUnique==0)
                    break;
            }
            if(isUnique==0)
                break;
        }
        if(isUnique==0)
            break;
    }
    if(isUnique==0)
    {
        printf("The given matrix is not a magic square as the elements are not unique");
        exit(0);
    }
    //SUM OF PRINCIPAL DIAGONAL ELEMENTS
    for(i=0;i<n;i++)
        psum+=a[i][i];
    //SUM OF SECONDARY DIAGONAL ELEMENTS
    for(i=0;i<n;i++)
        ssum+=a[i][n-i-1];
    if(psum!=ssum)
    {
        printf("The given matrix is not a magic square as the sum of both diagonals is not equal");
        exit(0);
    }
    //ROW SUM
    for(i=0;i<n;i++)
    {
        rsum[i]=0;
        for(j=0;j<n;j++)
            rsum[i]+=a[i][j];
        if(rsum[i]!=psum)
        {
            printf("The given matrix is not a magic square as the sum of %d th row is not equal to the sum of each of the diagonals",i+1);
            exit(0);
        }
    }
    //COLUMN SUM
    for(j=0;j<n;j++)
    {
        csum[j]=0;
        for(i=0;i<n;i++)
            csum[j]+=a[i][j];
        if(csum[j]!=psum)
        {
            printf("The given matrix is not a magic square as the sum of %d th column is not equal to the sum of each of the diagonals and each of the rows",j+1);
            exit(0);
        }
    }
    //YES!!! NOW IT IS A MAGIC SQUARE
    printf("The given matrix is a magic square and the magic number is %d",psum);
    return 0;
}
