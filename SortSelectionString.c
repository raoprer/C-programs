#include<stdio.h>
#include<string.h>

int main()
{
    int n,pos;
    char str[20][20],small[20],temp[20];
    printf("Enter the number of elements\n");
    scanf("%d",&n);
    printf("Enter %d elements\n",n);
    for(int i=0;i<n;i++)
        gets(str[i]);

    //SELECTION SORT
    for(int i=0;i<n-1;i++)//Pass count
    {
        pos=i; strcpy(small,str[i]);
        for(int j=i+1;j<n;j++)
        {
            if(strcmp(small,str[j]))
            {
                pos=j; strcpy(small,str[j]);
            }
        }
        if(pos!=i)
        {
            strcpy(temp,str[i]);
            strcpy(str[i],str[pos]);
            strcpy(str[pos],temp);
        }
    }
    printf("The sorted array is\n");
    for(int i=0;i<n;i++)
        puts(str[i]);
    return 0;
}
