#include <cs50.h>
#include <stdio.h>

int main(void)
{
     int n;
    do
    {
        n = get_int("Width: ");
    }
    while (n < 1 || n > 8);
    // for each row
    for (int i = 0; i < n; i++)
    {
        // for spaces in column
        for (int j = n - 1; j > i; j--)
        {
            printf(" ");
        }
        // for hashes in column
        for (int k = 0; k < i + 1; k++)
        {
            printf("#");
        }
        printf("\n");
    }
}
