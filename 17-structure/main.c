#include <stdio.h>

struct room
{
    float width;
    double length;
    char *owner_name;
};

int main()
{
    struct room bed;
    char a[5];
    bed.owner_name=a;


    scanf("%f%lf\n",&bed.width,&bed.length);
    gets(bed.owner_name);
    printf("width : %f\nlength : %lf\nowner name : %s\n",bed.width,bed.length,bed.owner_name);
    return 0;
}
