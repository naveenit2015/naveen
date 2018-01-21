#include <stdio.h>
#include<conio.h>
int main()
{
    int arr[MAX_SIZE];
    int i, N;
    printf("Enter size of array: ");
    scanf("%d", &N);
    for(i=0; i<N; i++)
    {
    scanf("%d", &arr[i]);
    }
    printf("\nElements in array are");
    for(i=0; i<N; i++)
    {
    printf("%d, ", arr[i]);
    }
    return 0;
}
