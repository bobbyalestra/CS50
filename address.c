// & means get address
// * 

#include <stdio.h>

int main (void)
{
    int n = 50;

    // pointer to int .... int n
    int *p = &n;

    printf("%p\n", p);
}