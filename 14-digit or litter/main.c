#include <stdio.h>
#include <ctype.h>

int main()
{
    unsigned char a;

    scanf("%c",&a);
    printf((a>47&&a<58)?"digit":((a>64&&a<91)||(a>96&&a<123))?"Litter":"non");

    return 0;
}

