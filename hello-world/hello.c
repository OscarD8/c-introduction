#include <stdio.h>

int main()
{
    printf("Hello World");

    int A[5] = {2, 4, 6, 20, 10};
    for (int i = 0; i < 5; i++)
    {
        printf("%d\n", A[i]);
    }
    printf("sizeof array: %d\n.", (int)sizeof(A));
}