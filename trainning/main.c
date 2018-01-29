#include<stdio.h>
struct student{
    int id;
    char name[30];
    struct student *s;
};

int main(){
    struct student record[2] = {
        {20,"Ahmed"},
        {15,"medo"}};
    printf("%d %s\n%d %s\n\n",record[0].id,record[0].name,record[1].id,record[1].name);
    printf("size : %d\n",sizeof(record));
    return 0;
}
