#include <stdio.h>
#include<stdbool.h>

int main(void)
{
    // TODO: Prompt for start size
    int start, end, sum = 0, new, dead, count = 0;
    do
    {
        printf("Start size: ");
        scanf("%d", &start);
    }
    while (start < 9);

    // TODO: Prompt for end size
    do
    {
        printf("End size: ");
        scanf("%d", &end);
    }
    while (end < start);


    // TODO: Calculate number of years until we reach threshold
    while (true)
    {
        if (start >= end)
        {
            break;
        }
        new = start / 3;
        dead = start / 4;
        start += new - dead;
        count++;

    }

    // TODO: Print number of years
    printf("Years: %d", count);

    return 0;
}