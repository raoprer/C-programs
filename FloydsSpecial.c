#include<stdio.h>
#include<math.h>

int main()
{
    int n,var1=1,var2=1;

    printf("Enter the number: ");
    scanf("%d",&n);
    printf("\n");

    // Outer for loop to keep track of number of rows
    for (int i = 0; i < n; i++) {

        // for loop to keep track of spaces
        for (int j = n - 1; j > i; j--) {
            printf(" ");
        }

        // for loop to print the digits in pattern
        for (int k = 1; k <= var1; k++) {
            printf("%d",abs(k - var2));
        }

        var1 += 2;
        var2++;
        printf("\n");
    }
    return 0;
}
