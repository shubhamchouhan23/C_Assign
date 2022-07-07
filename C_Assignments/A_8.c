//C program to copy from one file to another file.
#include<stdio.h>
#include<stdlib.h>
int main()
{
    char c;
    FILE *fp1 = fopen("Strings.txt","r");
    FILE *fp = fopen("new1.txt","w");
    if(fp == NULL)
    {
        printf("can't open file");
        exit(0);
    }
    while((c=fgetc(fp1))!=EOF)
    {
        fputc(c,fp);
    }
    printf("Done\n");
    fclose(fp);
    fclose(fp1);
}
