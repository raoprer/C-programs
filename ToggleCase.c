#include<stdio.h>

int main()
{
    const int MAX=20;
    char str[MAX];
    printf("Enter the string\n");
    gets(str);
    for(int i=0;str[i]!='\0';i++)
    {
        if(str[i]>='A'&& str[i]<='Z')
            str[i]+=32;
        else if(str[i]>='a'&& str[i]<='z')
            str[i]-=32;
    }
    printf("%s",str);
    return 0;
}
