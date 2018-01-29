
#include <stdio.h>

int main()
{
    char temp[5],str[5];

    gets(&str[0]);      //gets(str);
    puts(&str[0]);      //puts(str);

    scanf("%4s",temp);  //scanf("%s",&temp[0]);
    printf("%s",temp); //printf("%s",&temp[0]);


    return 0;
}


