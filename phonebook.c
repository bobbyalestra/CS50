
#include <cs50.h>
#include <stdio.h>
#include <string.h>


int main (void)

{
    string names[4] = {"Emma", "Rodrigo", "Joe", "Bobby"};
    string numbers[4] = {"617-555-0100", "617-555-0101", "617-555-0102", "617-555-0103"};

    for (int i = 0; i < 4; i++) 
    {
        if (strcmp(names[i], "Emma") == 0)

        // %s is a placeholder for strings
        printf("%s\n")
    }
}