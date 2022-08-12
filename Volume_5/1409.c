// Two Gangsters

#include <stdio.h>

int main()
{
    int harry, larry;

    scanf("%d %d", &harry, &larry);

    // max represents total number of cans
    // both of them shoot a can at the same time
    // that's why 1 was subtracted
    int max = harry + larry - 1;
    
    printf("%d %d\n", max - harry, max - larry);

    return 0;
}
