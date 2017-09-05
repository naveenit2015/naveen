#include <stdio.h>
int main()
{
    double s1, s2, s3;

    printf("Enter three different numbers: ");
    scanf("%lf %lf %lf", &s1, &s2, &s3);

    if( s1>=s2 && s1>=s3 )
        printf("%.2f is the largest number.", s1);

    if( n2>=n1 && n2>=n3 )
        printf("%.2f is the largest number.", s2);

    if( n3>=n1 && n3>=n2 )
        printf("%.2f is the largest number.", s3);

    return 0;
}
