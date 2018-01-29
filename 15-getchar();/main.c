#include<stdio.h>

int main()
{
    char i=0;

    do
    {
        i=getchar();
        getchar();
        printf("you write : %c\n",i);
    }while(i!='7');

    return 0;
}
