#include <stdio.h>
void main()
{
    int num1, num2, num3;

    printf("Input the values of three numbers : ");
    scanf("%d %d %d", &num1, &num2, &num3);


    if (num1 > num2)   // Check if 'num1' is greater than 'num2'.
    {
        if (num1 > num3)   // Check if 'num1' is also greater than 'num3'.
        {
            printf("The 1st Number is the greatest among three. \n");
        }
        else
        {
            printf("The 3rd Number is the greatest among three. \n");
        }
    }
    else if (num2 > num3)   // If 'num1' is not the greatest, check if 'num2' is greater than 'num3'.
        printf("The 2nd Number is the greatest among three \n");
    else
        printf("The 3rd Number is the greatest among three \n");  // If none of the above conditions are met, 'num3' must be the greatest.
}
