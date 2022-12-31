#include<stdio.h>
#include<string.h>

int main()
{
    int w1,w2,i,j=0,k=0;
    char str[30],twoD[20][20],temp[20];

    printf("Enter the string: ");
    gets(str);
    printf("\nEnter the position of the words to be interchanged: ");
    scanf("%d %d",&w1,&w2);
    w1--;w2--;

    for(i=0;str[i]!='\0';i++){
        twoD[j][k]=str[i];
        k++;
        if(str[i]==' ' && str[i+1]!=' '){
            twoD[j][k]='\0';
            j++;
            k=0;
        }
    }
    twoD[j][k]='\0';

    strcpy(temp,twoD[w1]);
    strcpy(twoD[w1],twoD[w2]);
    strcpy(twoD[w2],temp);

    printf("\nThe modified array is: ");
    for(i=0;i<=j;i++)
        printf("%s ",twoD[i]);

    return 0;
}
