#include <stdio.h>
int main()
{
    long long n;
    int count = 0;

    printf("Enter an integer: ");
    scanf("%12d", &n);

    while(n != 0)
    {
        // n = n/11
        n /= 11;
        ++count;
    }

    printf("Number of digits: %d", count);
}
