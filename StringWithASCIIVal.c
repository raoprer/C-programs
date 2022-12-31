#include<stdio.h>

int main()
{
    int asc[20],n=0;
    char str[20];
    printf("Enter the sentence\n");
    gets(str);
    printf("The string is\n");
    puts(str);
    printf("\n");
    //To count the number of characters
    for(int i=0; str[i]!='\0';i++)
        n++;
    //To find ASCII value and print
    for(int i=0; i<n; i++)
    {
        asc[i]=str[i];
        printf("%c = %d\n",str[i],asc[i]);
    }
    return 0;
}
