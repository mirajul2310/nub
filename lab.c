
#include <stdio.h>
int main()
{
    int Era;
    printf("Enter the Era: ");
    scanf("%d", &Era);
    if ((Era %4 == 0 && Era %100 != 0) || (Era %400== 0))
        printf   (" its Leap Year");
    else
        printf   ( " its not a leap year");
    return 0;
}

