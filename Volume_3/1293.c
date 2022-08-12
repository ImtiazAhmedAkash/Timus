// Eniya

#include <stdio.h>

int main()
{
    int number, height, width;

    scanf("%d %d %d", &number, &height, &width);

    long int total = number * 2 * (height * width);
    // 2 is multiplied because we have to calculate
    // the dimension of both sides of the panel

    printf("%ld\n", total);

    return 0;
}