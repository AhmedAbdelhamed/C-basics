#include <stdio.h>
#include <math.h>

int main()
{
    int i=0;

    printf("%-21spower\n","num");
    for ( ; i<=1000 ; i++)
    {
        printf("%-21d%.0f\n", i , pow(i,2) );
    }

    return 0;
}
