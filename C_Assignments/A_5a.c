/*
Q5_A.Swap two numbers using bitwise operators.
   
*/

#include<stdio.h>

int main() {

    int a, b;

    scanf("%d %d", &a, &b);
    printf("Before swapping the number is: \na = %d\nb = %d\n", a, b);

    a = a ^ b;
    b = a ^ b;
    a = a ^ b;

    printf("After swapping the number is: \na = %d\nb = %d\n", a, b);


    return 0;
}
