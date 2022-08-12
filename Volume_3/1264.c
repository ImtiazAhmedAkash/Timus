// Workdays

#include <stdio.h>

int main()
{
    int a, b;

    scanf("%d %d", &a, &b);

    // for every index from 0 to a - 1,
    // count the element from 0 to b
    printf("%d", a * (b + 1));
    
    return 0;
}
