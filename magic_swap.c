#include <stdio.h>
int main()
{
    int a, b;
    printf("Enter the Values\n");
    scanf("%d%d", &a, &b);
    printf("===Before Swap=== \n A = %d B = %d", a, b);
    a = a + b;
    b = a - b;
    a = a - b;
    printf("\n===After Swap=== \n A = %d B = %d", a, b);
    return 0;
}