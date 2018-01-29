#include <stdio.h>

int main()
{
    int a[2][4],i=0,j=0;

    for( ; i<2 ; i++)
        for(j=0 ; j<4 ;j++)
        {
            printf("Enter a[%d][%d] : ",i,j);
            scanf("%d",&a[i][j]);
        }

    for( i=0; i<2 ; i++)
        for( j=0 ; j<4 ;j++)
            printf("value of a[%d][%d] : %d\n",i,j,a[i][j]);

    return 0;
}




//#include <stdio.h>
//
//void copy1(char * const s1, const char *s2)
//{
//    unsigned short i=0;
//
//    for( ; (*(s1+i)=s2[i]) !='\0' ; i++);
//
//    return ;
//}
//
//void copy2(char *s1 ,const char *s2)
//{
//    unsigned short i=0;
//
//    for( ; (*s1=*s2) !='\0' ;s1++,s2++);
//
//    return ;
//}
//
//int main()
//{
//    char string1[10], *string2="ahmed" , string3[10] , string4[]="medo";
//
//    copy1( string1 , string2);
//    printf("THE FIRST STRING   : %s",string1);
//    copy2( string3 , string4);
//    printf("\nTHE SECOND STRING  : %s",string3);
//
//    return 0;
//}
//
//










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





/*
#include <stdio.h>

int main()
{
    int i=0;
    char a[2][10];

    for( ; i<2 ;i++)
    {
        scanf("%9s",&a[i][0]);  //gets(a[i]);
    }

    for( i=0 ; i<2 ;i++)
    {
        printf("%s\n",a[i]); //puts(a[i]);
    }


    return 0;
}


*/


/*
#include<stdio.h>
int main()
{

   int disp[3][5];


   int i, j;

   for(i=0; i<=2; i++)
   {
       for(j=0;j<=4;j++)
       {
          printf("Enter value for disp[%d][%d]:", i, j);
          scanf("%d", &disp[i][j]);
       }
    }
    return 0;
}
*/

/* Valid declaration*/
//int abc[2][2] = {1, 2, 3 ,4 }
/* Valid declaration*/
//int abc[][2] = {1, 2, 3 ,4 }
/* Invalid declaration – you must specify second dimension*/
//int abc[][] = {1, 2, 3 ,4 }
/* Invalid because of the same reason  mentioned above*/
//int abc[2][] = {1, 2, 3 ,4 }




/*

c automatically passed array to function by reference

#include <stdio.h>

void go(char b[])
{
    gets(b);
}

int main()
{
    char a[]="ahmed";

    go(a);
    puts(a);

    return 0;
}
*/
