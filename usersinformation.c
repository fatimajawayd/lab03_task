// Q:09 Write a C program that asks the user's name and age and print them use escape sequences as well. 

#include <stdio.h>

int main(void)
{
    char name[20];
    int age;
    
    printf("Enter your name: ");
    scanf("%s", name);

    printf("Enter your age: ");
    scanf("%d", &age);

    printf("\n Hello, %s\n", name);
    printf("Your age is %d\n", age);

    return 0;
}
