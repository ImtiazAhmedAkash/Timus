// Workdays

#include <stdio.h>

int main()
{
    int a, b;

    scanf("%d %d", &a, &b);

    printf("%d", a * (b + 1));
    // for every index from 0 to a - 1,
    // count the element from 0 to b

    return 0;
}