#include <Stdio.h>

int main()
{
    int num, first = 0, last, total, temp;

    printf("Enter your number: ");
    scanf("%d", &num);

    last = num % 10;

    printf("The last digit of %d is: %d", num, last);

    temp = num;

    // first
    for (first = num; first != 0; first /= 10)
    {
    }
    printf("\nThe first digit of %d is: %d", temp, first);

    total = first + last;
    printf("\nThe sum of first digit %d and last digit %d is: %d", first, last, total);

    return 0;
}