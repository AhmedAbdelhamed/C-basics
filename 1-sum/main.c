#include <stdio.h>
#include <stdlib.h>

int main()
{
    int number1,number2;

    printf("--Enter first number --->");
    scanf( "%u" , &number1 );
    printf("--Enter second number -->");
    scanf( "%u" , &number2 );
    printf("--THE Sum is ----------->%d\a",number1+number2);

    return 0;

}
