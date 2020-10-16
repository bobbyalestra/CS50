

#include <stdio.h>



int main (void)
{
 int n = get_int("Number of Scores : ");

 int scores[n];

 for (int i = 0; i < n; i++) {
     scores[i] = get_int("Score %i : ", i + 1);

 }

printf("Average: TODO:\n" );

}
float average(int length, int array[])
{
    int sum = 0 
    for (int i = 0; i < length; i++)
    {
        sum = sum + array[i]
    }
}