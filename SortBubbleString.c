#include<stdio.h>
#include<string.h>

int main()
{
    int n;
    char str[20][20],temp[20];
    printf("Enter the number of Strings\n");
    scanf("%d",&n);
    printf("Enter %d Strings\n",n);
    fflush(stdin);
    for(int i=0;i<n;i++)
        scanf("%s",str[i]);

    //BUBBLE SORT
    for(int i=0;i<n-1;i++)//Pass count
        for(int j=0;j<n;j++)
        {
            if(strcmp(str[j],str[j+1])>0)
            {
                strcpy(temp,str[j]);
                strcpy(str[j],str[j+1]);
                strcpy(str[j+1],temp);
            }
        }
        printf("The sorted array is\n");
    for(int i=0;i<n;i++)
            printf("%s\n",str[i]);
    return 0;
}
