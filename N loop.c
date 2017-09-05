#include <stdio.h>
int main()
{
    int s, i, sum = 0;
    
    printf("Enter a positive integer: ");
    scanf("%s",&n);

    for(i=1; i <= n; ++i)
    {
        sum += i;   // sum = sum+i;
    }

    printf("Sum = %d",sum);

    return 0;
}
