#include<stdio.h>
#include<conio.h>
int x = 20;
int main()
{
    extern int y;
    printf("The value of x is %d \n",x);
    printf("The value of y is %d",y);
    return 0;
}
    int y=30;
