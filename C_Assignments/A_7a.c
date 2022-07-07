/* C program to create a file and store information.*/
#include<stdio.h>
#define FILENAME "new.txt"
void main()
{
    FILE *fp = fopen("new.txt","w");
    int age;
    float sal;
    char n[20];
    char ch;
    int count =0;
    if(fp==NULL)
    {
        printf("file does not exists\n");
        return;
    }
    printf("enter the name\n");
    scanf("%s",n);
    fprintf(fp,"name = %s\n",n);
    printf("enter the age\n");
    scanf("%d",&age);
    fprintf(fp,"age = %d\n",age);
    printf("enter the salary\n");
    scanf("%f",&sal);
    fprintf(fp,"salary = %.2f\n",sal);
    fclose(fp);
}
