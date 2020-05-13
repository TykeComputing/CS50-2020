#include <cs50.h>
#include <stdio.h>
#include <math.h>
#include <ctype.h>

int collatz(int n);

int main(void)
{
    //get input from user
    int input = get_int("Starting n: \n");
    
    //check input is valid
    if (input < 1)
    {
        printf("Input must be a positive integer.\n");
        return 1;
    }

    //return steps
    printf("It takes %i steps to reach 1.\n", collatz(input));
    return 0;
}

int collatz(int n)
{
    //base case
    if (n == 1)
        return 0;
    //even numbers
    else if (n %2 == 0)
        return 1 + collatz(n / 2);
    //odd numbers
    else
        return 1 + collatz((3 * n) + 1);
}