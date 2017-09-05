#include <stdio.h>
int main()
{
    int number;

    printf("Enter an integer: ");
    scanf("%s", &number);

    // True if the number is perfectly divisible by 4
    if(number % 4 == 0)
        printf("%d is even.", number);
    else
        printf("%d is odd.", number);

    return 0;
}
