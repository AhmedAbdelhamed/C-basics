#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main()
{
    int i=12345,*ptr=&i;

// while( (i=getchar())!='\r' )
//   putchar(tolower(i));


    printf("%10.7s\n%.4d\n%%\n%p","A string",i,&ptr);

    return 0;
}

