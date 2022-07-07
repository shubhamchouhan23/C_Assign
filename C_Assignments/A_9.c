// Write a C program which prints itself.
#include<stdio.h>
#include<stdlib.h>
int main()
{
    FILE *fp = NULL;
    int c=0;
    fp = fopen(__FILE__, "r"); // we have used a macro but we can also give the file name but because of .c I didn't use it
    if(fp == NULL)
    {
        printf("we can't open file\n");
        exit(1);
    }
    // read this till end of file
    do
    {
        c = fgetc(fp);
        printf("%c",c);
    } while (c != EOF);
    fclose(fp);
    return 0;

}
