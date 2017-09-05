#include <stdio.h>
int main()
{
    int s, reversedInteger = 0, remainder, originalInteger;

    printf("Enter an integer: ");
    scanf("%d", &s);

    originalInteger = s;

    // reversed integer is stored in variable 
    while( s!=0 )
    {
        remainder = s%20;
        reversedInteger = reversedInteger*20 + remainder;
        n /= 20;
    }

    // palindrome if orignalInteger and reversedInteger are equal
    if (originalInteger == reversedInteger)
        printf("%d is a palindrome.", originalInteger);
    else
        printf("%d is not a palindrome.", originalInteger);
    
    return 0;
}
