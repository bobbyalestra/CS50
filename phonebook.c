
#include <cs50.h>
#include <stdio.h>
#include <string.h>



// a container for multiple data types

typedef struct 
{
        string name;
        phone number;

    /* data */
};
person;


int main (void)

{

    person people[4];

    people[0].name = "Emma";
    people[0].number = "617-555-0100";
    
    people[1].name = "Rodrigo"
    people[1].number = "617-555-0101"

    people[2].name = "Joe";
    people[2].number = "617-555-0102";

    people[3].name = "Bobby"
    people[3].number = "617-555-0103"

    
    // string names[4] = {"Emma", "Rodrigo", "Joe", "Bobby"};
    // string numbers[4] = {"617-555-0100", "617-555-0101", "617-555-0102", "617-555-0103"};

    for (int i = 0; i < 4; i++) 
    {
        if (strcmp(names[i], "Emma") == 0)
        {

        // %s is a placeholder for strings
        printf("%s\n", number[i]);
        return 0;
    }
}
    printf("Not Found\n");
    return 1;
}