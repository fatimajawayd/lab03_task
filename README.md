# LAB TASK-03

***Q:06\
Welcome Message***
```c

#include <stdio.h>

int main(void)
{
    int length;
    int width;

    printf("Length of Rectangle: ");
    scanf("%d", &length);
    
    printf("Width of Rectangle: ");
    scanf("%d", &width);

    printf("The area of rectangle is = %d\n", length*width);
    printf("The perimeter of rectangle is = %d\n", (length+width)*2);

    return 0;
}
```

***Q:07\
Area and Perimeter of a Rectangle***

```c
#include <stdio.h>

int main(void)
{
    int length;
    int width;

    printf("Length of Rectangle: ");
    scanf("%d", &length);
    
    printf("Width of Rectangle: ");
    scanf("%d", &width);

    printf("The area of rectangle is = %d\n", length*width);
    printf("The perimeter of rectangle is = %d\n", (length+width)*2);

    return 0;
}
```

***Q:08\
Percentage Calculator***

```c
#include <stdio.h>

int main(void)
{
    float subj1, subj2, subj3;
    float obtainedmarks;
    float percentage;
    
    printf("Enter the marks of subj1: ");
    scanf("%f", &subj1);

    printf("Enter the marks of subj2: ");
    scanf("%f", &subj2);

    printf("Enter the marks of subj3: ");
    scanf("%f", &subj3);

    obtainedmarks = subj1+subj2+subj3;
    percentage = (obtainedmarks/300)*100;
    printf("The percentage is = %f", percentage);

    return 0;

}
```

***Q:09\
Write a C program that asks the user's name and age and print them use escape sequences as well.***

```c
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
```

***Q:10\
Write a program to swap two variables using a third variable.***

```c
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
```

***Q:10(B)\
Repeat the program again without using a third variable.***

```c
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
```

