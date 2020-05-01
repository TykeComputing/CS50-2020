#include <cs50.h>
#include <stdio.h>

float average(int length, int array[]);

int main(void)
{
    //Get number of scores
    int n = get_int("How many assignments?\n");

    //Get scores
    int scores[n];
    for (int i = 0; i < n; i++)
    {
        scores[i] = get_int("Score %i: \n", i + 1);
    }

    //Print average
    printf("Average: %.2f\n", average(n, scores));
}

float average(int length, int array[])
{
    int sum = 0;
    for (int i = 0; i < length; i++)
    {
        sum += array[i];
    }
    return (float) sum / (float) length;
}