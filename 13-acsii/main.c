#include <stdio.h>

int main()
{
    unsigned char a=0;

    for( ; a<128 ; a++)
    {
        printf("%-7d%c\n",a,a);
    }


    return 0;
}
