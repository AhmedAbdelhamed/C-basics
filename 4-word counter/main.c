#include <stdio.h>


int main()
{
    int acount=0,bcount=0,scount=0;
    unsigned short grade;

    while( (grade=getche()) !='\r')
        switch(grade)
    {
        case 'A':
            case 'a': ++acount; break;

        case 'B':
            case 'b': ++bcount; break;

        case ' ': ++scount; break;
    }

    printf("\nacount = %d\nbcount = %d\nscount = %d",acount,bcount,scount+1);

    return 0;
}
