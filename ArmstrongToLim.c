#include<stdio.h>
#include<math.h>

int main()
{
    int lim, arm=0, i, j,rightmost;
    printf("Enter the limit");
    scanf("%d", &lim);
    printf("The armstrong numbers until the given limits are\n");
    for(i=1; i<lim; i++)
    {
            arm=0;
            j=i;
            while(j>0)
            {
                rightmost=j%10;
                arm+=pow(rightmost,3);
                j/=10;
            }
            if(i==arm)
                printf("%d\n", i);
    }
    return 0;
}
