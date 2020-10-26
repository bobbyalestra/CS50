// & means get address
// * go to address

#include <stdio.h>


// points to a seqence of characters (string)
typedef char *string;


int main (void)
{
    int n = 50;

    // pointer to int .... int n
    int *p = &n;

    printf("%p\n", *p);
}