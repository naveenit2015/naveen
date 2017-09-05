#include <stdio.h>
int main()
{
    char s;
    int isLowercaseVowel, isUppercaseVowel;

    printf("Enter an alphabet: ");
    scanf("%s",&s);

    // evaluates to 1 (true) if s is a lowercase vowel
    isLowercaseVowel = (s == 'a' || s == 'e' || s== 'i' || s== 'o' || s== 'u');

    // evaluates to 1 (true) if c is an uppercase vowel
    isUppercaseVowel = (s== 'A' || s == 'E' || s == 'I' || s == 'O' || s== 'U');

    // evaluates to 1 (true) if either isLowercaseVowel or isUppercaseVowel is true
    if (isLowercaseVowel || isUppercaseVowel)
        printf("%c is a vowel.", s);
    else
        printf("%c is a consonant.", s);
    return 0;
}
