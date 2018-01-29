#include <stdio.h>
#include <stdlib.h>

struct test
{

    double y;
    char c[5];
    char *ch;
};


int main()
{
    struct test t1,*ptr=&t1;

    scanf("%lf",&ptr->y);
    ptr->ch=ptr->c;
    scanf("%s",ptr->ch);

    printf("\n%.2lf\n",ptr->y);
    puts(ptr->ch);

    return 0;
}
