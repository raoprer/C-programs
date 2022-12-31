#include<stdio.h>
#include<math.h>

int main()
{
    int lim, i=1, j, k, z, rightmost, arm;
    printf("Enter the upper limit for printing armstrong numbers\n");
    scanf("%d",&lim);

    while(i<=lim)
    {
        arm=0;
        k=0;
        j=i;
        z=i;
        while(j>0)
        {
            j/=10;
            k++;
        }
        while(z>0)
        {
            rightmost=z%10;
            arm=arm+pow(rightmost,k);
            z/=10;
        }
        if(i==arm)
            printf("%d\n",i);

        i++;
    }
    return 0;
}
