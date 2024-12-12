#include <stdio.h>

int main()
{
    int num, temp, count = 0;

    printf("Enter your number: ");
    scanf("%d", &num);

    if (num == 0)
    {
        printf("0");
    }
    else
    {
        for (temp = num; temp != 0; temp /= 10)
        {
            count++;
        }
        printf("%d\n", count);
    }

    return 0;
}
