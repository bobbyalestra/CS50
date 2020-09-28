// i want to make a string
// i want to ask the user there name
// use %s to declare the variable

#include <stdio.h>
#include <cs50.h>
int main(void)
{
    string name = get_string("Hello, What is your name?\n");
    printf("Hello,  %s. \n", name);
}