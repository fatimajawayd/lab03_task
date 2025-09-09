/*
Q:07
AREA AND PERIMETER OF RECTANGLE
*/

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
