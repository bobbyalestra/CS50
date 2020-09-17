#include <cs50.h>
#include <stdio.h>


//  ths "protoype" function is used to maniuplate scope by idenifing it first then writing code later 
void cough(int n);

int main(void)
{
  cough(3);
}
// adding a parameter to the cough function
    void cough(int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("cough\n");
    }
    
}