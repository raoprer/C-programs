#include<stdio.h>
#include<string.h>

int main()
{
    int n;
    char str[30][30],temp[10];

    printf("Enter the number of strings to be entered: ");
    scanf("%d",&n);
    printf("\nEnter the strings\n");

    fflush(stdin);
    for(int i=0;i<n;i++)
        gets(str[i]);

    for(int i=0;i<n-1;i++){ //number of passes
        for(int j=i+1;j<n;j++){ //selection sort
            if(strcmp(str[i],str[j])>0){
                strcpy(temp,str[i]);
                strcpy(str[i],str[j]);
                strcpy(str[j],temp);
            }
        }
    }

    printf("\nThe strings in alphabetic order is as follows\n");
    for(int i=0;i<n;i++){
        puts(str[i]);
    }
    return 0;
}
