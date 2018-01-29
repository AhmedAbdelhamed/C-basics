#include <stdio.h>
#include <time.h>
//auto int a=2; // auto used with local variable
//local variables have automatic storage by default

int main()
{
    st();
    st();
    st();
    st();
    aut();
    aut();
    aut();
    aut();
    return 0;
}
void st()
{
    static int i=0;
    i++;
    printf("%d\n",i);
    return ;
}
void aut()
{
    int i=0;
    i++;
    printf("%d\n",i);
    return ;
}
