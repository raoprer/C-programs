#include<stdio.h>
#include<string.h>

int main()
{
    char word[20], temp[20];
    int n=0,flag=1;
    printf("Enter the word\n");
    scanf("%s",word);
    //To count the number of letters in the word
    for(int i=0; word[i]!='\0'; i++)
        n++;
    //To store word in temp
    strcpy(temp,word);
    //To convert upper case to lower case
    for(int i=0; i<n; i++)
    {
        if(word[i]>='A' && word[i]<='Z')
            word[i]+=32;
    }
    //To see if word is equal to its reverse
    for(int i=0; i<n/2; i++)
    {
        if(word[i]!=word[n-1-i])
        {
            flag=0;
            break;
        }
    }
    if(flag)
        printf("%s is a palindrome",temp);
    else
        printf("%s is not a palindrome",temp);
    return 0;
}
