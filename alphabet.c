#include <stdio.h>
int main()
{
    char s;
    printf("Enter a character: ");
    scanf("%s",&s);

    if( (s>='a' && s<='z') || (s>='A' && s<='Z'))
        printf("%s is an alphabet.",s);
    else
        printf("%s is not an alphabet.",s);

    return 0;
}
