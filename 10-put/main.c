#include <stdio.h>

void put(char *ptr)
{
    //printf("%s",ptr);
    while( *ptr !='\0')
        printf("%c",*ptr++);

    return;
}

int main()
{
    char ch[10],*che;

    che=ch;
    gets(ch);
    put(che);

    return 0;
}
