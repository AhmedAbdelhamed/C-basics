#include <stdio.h>

int main()
{
    int num1,num2;

    printf("         this program to display the relation between two numbers\n");
    printf("ENTER THE TWO NUMBERS\n");
    scanf("%d%d",&num1,&num2);
    printf(num1==num2?"equal":num1>num2?"num1 larger":"num2 larger");
    //num1==num2? printf("equal"): printf(num1>num2?"num1 larger":"num2 larger"); //onther way

    return 0;
}
