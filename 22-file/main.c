#include <stdio.h>

int main()
{
    FILE *f1,*f2;
    char ch;

    f1=fopen("medo.txt","r");
    f2=fopen("medo3.txt","w+");

    while( (ch=fgetc(f1)) !=EOF )
        putc(ch,f2);

    fclose(f1);
    fclose(f2);

    return 0;
}


//#include<stdio.h>
//
//int main()
//{
//    FILE *fp;
//    char s1[10];
//    char s2[10];
//    int x,y;
//
//    gets(s1);
//    scanf("%d",&x);
//    fp=fopen("medo.txt","w");
//    fprintf(fp,"%s",s1);
//    fputc('A',fp);
//    fprintf(fp," %i",x);
//    fclose(fp);
//
//    fp=fopen("medo.txt","r");
//    fscanf(fp,"%s%i",s2,&y);
//    puts(s2);
//    printf("%d",y);
//    fclose(fp);
//
//    return 0;
//}



//#include <stdio.h>
//
//int main()
//{
//    FILE *fp;
//    char i;
//
//    fp=fopen("E:\\courses\\c\\projects\\basic\\ahmed.txt","r");
//    while( ( i=fgetc(fp)) != EOF)
//        printf("%c",i);
//
//    fclose(fp);
//
//    return 0;
//}
