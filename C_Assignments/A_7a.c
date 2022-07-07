/*
Q7.C program to create a file and store information.
    
*/

#include<stdio.h>
#include<sys/types.h>
#include<fcntl.h>

int main() {

    int fd;

    char buffer[100] = "Hello i am storing information in this data file. Yipeee exicted to go in file.";
    
    fd = creat("data.txt",  0777);
    write(fd, buffer, sizeof(buffer));

    close(fd);
    return 0;
}
