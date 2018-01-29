#include <stdio.h>

struct room
{
    float width;
    double length;
    char *owner_name;
};

struct room fillstruct(struct room bath)
{
    scanf("%f%lf\n",&bath.width,&bath.length);
    gets(bath.owner_name);

    return bath;
}

int main()
{
    struct room bed;
    char a[5];
    bed.owner_name=a;

    bed=fillstruct(bed);
    printf("width : %f\nlength : %lf\nowner name : %s\n",bed.width,bed.length,bed.owner_name);
    return 0;
}
