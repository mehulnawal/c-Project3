#include <stdio.h>

int main()
{
    char i = 97;

    do
    {
        printf("%c\n", i);
        i+= 4;
    } while (i <= 122);

    return 0;
}