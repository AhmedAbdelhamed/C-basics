#include <stdio.h>

void copy1(char * const s1, const char *s2)
{
    unsigned short i=0;

    for( ; (*(s1+i)=s2[i]) !='\0' ; i++);

    return ;
}

void copy2(char *s1 ,const char *s2)
{
    unsigned short i=0;

    for( ; (*s1=*s2) !='\0' ;s1++,s2++);

    return ;
}

int main()
{
    char string1[10], *string2="ahmed" , string3[10] , string4[]="medo";

    copy1( string1 , string2);
    printf("THE FIRST STRING   : %s",string1);
    copy2( string3 , string4);
    printf("\nTHE SECOND STRING  : %s",string3);

    return 0;
}


//printf( strcmp(a,b)==0? "same" : strcmp(a,b)<0? "2>1" : "1>2");









//#include<stdio.h>
//
//void cube(int *ptr)
//{
//    printf("%d\n",*ptr**ptr);
//
//    return ;
//}
//
//int main()
//{
//    int *ptr1,*ptr2,a,b,c;
//
//    ptr1=&b;
//    ptr2=&c;
//
//    scanf("%d",&a);
//    cube(&a);
//
//    scanf("%d",ptr1);
//    cube(ptr1);
//
//    scanf("%d",ptr2);
//    cube(ptr2);
//
//
//    return 0;
//}

