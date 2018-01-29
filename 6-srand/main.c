#include <stdio.h>
#include <time.h>
//auto int a=2; // auto used with local variable

int main()
{

    printf("%d\n",srand(time(NULL)));
    printf("%d\n",srand(14));
    printf("%d\n",rand());

    return 0;
}
