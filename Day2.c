// Q-5//
#include <stdio.h>
int main()
{
    int n, sum = 0;

    // Read the number
    scanf("%d", &n);

    // finding the sum of digits
    while (n != 0)
    {
        sum += n % 10; // it Extract last digit
        n /= 10;       // remove last digit
    }
    printf("sum of digits = %d", sum);
    return 0;
}

// Q-6
#include <stdio.h>
int main()
{
    int n, reverse = 0;

    // Read the number
    scanf("%d", &n);

    // reverse the number
    while (n != 0)
    {
        reverse = reverse * 10 + (n % 10);
        n /= 10;
    }
    printf("Reversed Number = %d", reverse);

    return 0;
}

// Q-7
#include <stdio.h>
int main()
{
    int n, product = 1;

    // Read the number
    scanf("%d", &n);

    // Calculate product of digits
    while (n != 0)
    {
        product *= (n % 10);
        n /= 10;
    }

    printf("Product of digits = %d", product);
    return 0;
}

// Q-8
#include <stdio.h>
int main()
{
    int n, temp, reverse = 0;
    // Read the number
    scanf("%d", &n);
    temp = n;

    // Reverse the number
    while (n != 0)
    {
        reverse = reverse * 10 + (n % 10);
        n /= 10;
    }
    // Compare original and reversed number
    if (temp == reverse)
        printf("Palindrome number");
    else
        printf("Not a palindrome number");
    return 0;
}