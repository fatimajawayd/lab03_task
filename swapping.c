/*
Q:10
Write a program to swap two variables using a third variable.
*/

#include <stdio.h>

int main(void)
{
    int f;
    int a;
    int b;

    printf("Enter number f: ");
    scanf("%d", &f);

    printf("Enter number a: ");
    scanf("%d", &a);
    b = f;
    f = a;
    a = b;

    printf("f is %d\n", f);
    printf("a is %d\n", a);

    return 0;
}


/*
Repeat the program again without using a third variable.
*/


#include <stdio.h>

int main(void)
{
    int c;
    int d;

    printf("Enter number c: ");
    scanf("%d", &c);

    printf("Enter number d: ");
    scanf("%d", &d);

    c = c+d;
    d = c-d;
    c = c-d;

    printf("c is %d\n", c);
    printf("d is %d\n", d);

    return 0;
}


    
