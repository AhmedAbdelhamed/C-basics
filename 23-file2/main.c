#include<stdio.h>

int main()
{
    FILE *fp;
    int x,y,a,b;

    scanf("%d%d",&x,&y);
    fp=fopen("medo.txt","w");
    fprintf(fp,"%i",x);
    fprintf(fp," %i",y);
    fclose(fp);

    fp=fopen("medo.txt","r");
    fscanf(fp,"%i%i",&a,&b);
    printf("%d %d",a,b);
    fclose(fp);

    return 0;
}



//#include <stdio.h>
//#include <stdlib.h>
//
//int main()
//{
//    FILE *f1,*f2;
//    char st[11];
//    char *sp=st;
//
//    f1=fopen("ahmed2.txt","a+");
//    f2=fopen("ahmed3.txt","a+");
//    if( NULL == f1 )
//    {
//        puts("error in file");
//        exit(1);
//    }
//    if( NULL == f2 )
//    {
//        puts("error in file");
//        exit(1);
//    }
//
//    while( NULL != (fgets(sp,5,f1)) )
//    {
//        printf("%s",sp);
//        fputs(sp,f2);
//    }
//
//
//    fclose(f2);
//    fclose(f1);
//    return 0;
//
//}
//
//


//#include <stdio.h>
//#include <stdlib.h>
//
//int main()
//{
//    FILE *f1,*f2;
//    char c;
//
//    f1=fopen("ahmed.txt","r");
//    f2=fopen("ahmed2.txt","w");
//
//    if( NULL == f1 )
//    {
//        puts("Error in f1");
//        exit(1);
//    }
//    if( NULL == f2 )
//    {
//        puts("Error in f2");
//        exit(1);
//    }
//
//    while( EOF != (c=fgetc(f1)) )
//    {
//        fputc(c,f2);
//        printf("%c",c);
//    }
//
//
//    fclose(f1);
//    fclose(f2);
//
//    puts("\n\nmission complete");
//
//    return 0;
//}
//
//


//#include <stdio.h>
//#include <conio.h>
//#include <stdlib.h>
//
//int main()
//{
//    FILE *fp;
//    char c;
//    char *st="ahmed";
//
//    fp=fopen("E:\\courses\\c\\projects\\basic\\trainning\\ahmed.txt","w");
//    if(NULL==fp)
//    {
//        puts("error");
//        exit(1);
//    }
//
//    while( (c=getche()) != '\r' )
//        fputc(c,fp);
//
//    fprintf(fp,"\nahmed\n");
//    fprintf(fp,st);
//
//    fclose(fp);
//    return 0;
//}
