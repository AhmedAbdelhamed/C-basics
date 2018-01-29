#include<stdio.h>

int main()
{
    int i[6]={1,2,3,4,5},*ptr1=i,cou=-1;
    char j[6]={'1','2','3','4','5'},*ptr2=j;
    char arr[][5]={"ahmed","medo ","abdo"},*ptr3=&arr[0][0];

    char *arr2[]={"abcd","efgh","ijkl","mnop"};


    puts(arr2[0]);
    while(cou++!=3)
    while(*arr2[cou])  //while(*ptr4) printf("%xH\n",(unsigned int)ptr4++);
        printf("%xH\n",(unsigned int)arr2[cou]++);

    printf("\n-------\n");
    for( cou=0 ; *(ptr3+cou) ; cou++)
        printf( cou==4||cou==9? "%c\n":"%c",ptr3[cou]);

    printf("\n-------\n");
    while(*ptr1)
        printf("%xH\n",(unsigned int)ptr1++);

    printf("-------\n");
    while(*ptr2)
        printf("%xH\n",(unsigned int)ptr2++);

    printf("-------\n");
    while(*ptr3)
        printf("%xH\n",(unsigned int)ptr3++);

    return 0;
}
