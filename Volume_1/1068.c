// Sum

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int input;
    long long int sum = 0;

    scanf("%d", &input);

    if (input == 0 || input == -1)
    {
        printf("%lld\n", input + 1);
        return 0;
    }

    // 1 + 2 + ... + n = n * (n + 1) / 2
    // input value can be negative,
    // so taking the absolute value
    sum = abs(input) * (abs(input) + 1) / 2; 

    // if the input is negative (except input == -1), 
    // sum will be negative, sum = 1 - sum
    if (input < 0)
        sum = 1 - sum;
    
    printf("%lld\n", sum);

    return 0;
}
