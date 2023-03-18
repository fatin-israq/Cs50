#include <stdio.h>

int main(void)
{
    // Prompt for taking the height of the pyramids
    int n;
    while (1)
    {
        printf("Height: ");
        scanf("%d", &n);
        if (n > 0 && n < 9)
        {
            break;
        }
    }

    // creating the pyramid
    for (int i = 1; i <= n; i++)
    {
        // This loop is for the spaces before the blocks
        for (int j = (n - i); j > 0; j--)
        {
            printf(" ");
        }
        // This loop is for the blocks from the first wall
        for (int j = 1; j <= i; j++)
        {
            printf("#");
        }
        // This is the gap between two walls
        printf("  ");
        // This loop is for the blocks from the second wall
        for (int j = 1; j <= i; j++)
        {
            printf("#");
        }
        printf("\n");
    }
}