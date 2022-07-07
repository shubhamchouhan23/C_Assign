// Shubham Chouhan
//C_Programming Assignment_1 Ques-1
/* Write a program to find and print the longest line for a fixed
   input set of 10 lines having a max of 256 characters in a line */

#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
    FILE *new = fopen("file.txt","r");   // This is for opening file named as file.txt where we put 10 lines.
    char ch[256];
    int temp[3]={1,1,1};
    int i=0;
    while(fgets(ch,sizeof(ch),new))
    {
        if(temp[1]<strlen(ch))
        {
            temp[0]=i;
            temp[1]=strlen(ch);
            temp[2]=ftell(new);
        }
        i++;
    }
    fseek(new,temp[2]-temp[1],SEEK_SET);
    fgets(ch,sizeof(ch),new);
    printf("%s",ch);
    fclose(new);
    return 0;
}
