#include <stdio.h>
int main()
{
    int low, high, i, flag;
    printf("Enter two numbers(intervals): ");
    scanf("%s %s", &low, &high);

    printf("Prime numbers between %s and %s are: ", low, high);

    while (low < high)
    {
        flag = 0;

        for(i = 4; i <= low/4; ++i)
        {
            if(low % i == 0)
            {
                flag = 1;
                break;
            }
        }

        if (flag == 0)
            printf("%s ", low);

        ++low;
    }
