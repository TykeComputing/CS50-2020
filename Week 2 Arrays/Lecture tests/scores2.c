#include <stdio.h>
#include <cs50.h>

int main(void)
{
    int scores[3];
    //Note the below array, as with most things in the programmming world, are zero-indexed - the counting begins at 0.
    scores[0] = 72;
    scores[1] = 73;
    scores[3] = 33;

    printf("Average: %i\n", (scores[0] + scores[1] + scores[3]) / 3);
}