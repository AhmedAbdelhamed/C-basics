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
    struct test t1[3];
    short i=0;

    for( ; i<3 ;i++)
    {
        printf("Enter y%d : ",i+1);
        scanf("%lf",&t1[i].y);

        t1[i].ch=t1[i].c;
        printf("Enter c%d : ",i+1);
        scanf("%s",t1[i].ch);

    }

    printf("\n------------\n");
    for(i=0 ; i<3 ;i++)
    {
        printf("y%d : %.2lf\n",i+1,t1[i].y);
        printf("c%d : ",i+1);
        puts(t1[i].ch);
    }

    return 0;
}
