#include<stdio.h>

int main()
{
    char str[20],temp;
    int n=0;
    printf("Enter the string \n");
    gets(str);
    for(int i=0; str[i]!='\0';i++)
        n++;
    for(int i=0; i<n; i++)
    {
        if(str[i]==' ')
        {
            for(int j=i;j<n;j++)
                str[j]=str[j+1];
            n--;
            i--; //Needed in case of multiple blanks
        }
    }
    printf("%s",str);
    return 0;
}
