#include <cs50.h>
#include <stdio.h>

int main(void)
{
    // Getting input from user
    int n;
    do
    {
        n = get_int("Width: ");
    }
    while (n < 1 || n > 8);

    // For each row
    for (int i = 0; i < n; i++)
    {
        // For each spaces in left side of pyramid
        for (int j = n - 1; j > i; j--)
        {
            printf(" ");
        }
        // For each hashes in left side of pyramid
        for (int k = 0; k < i + 1; k++)
        {
            printf("#");
        }

        // For spaces in the middle of both sides of pyramid
        printf("  ");

        // For hashes in the right side of the pyramid
        for (int l = 0; l < i + 1; l++)
        {
            printf("#");
        }
        printf("\n");
    }
}
