
#include <cs50.h>
#include <stdio.h>
#include <string.h>

int main (void)
{
    string names[4] = {"Emma", "Rodrigo", "Joe", "Bobby"}

    for (int i = 0; i < 4; i++)
    {
        if (strcmp(names[i], "Emma") == 0
        {
            printf("Found\n");
            return 0;
        }
    }

    printf("Nor Found\n")
    return 1;
}
